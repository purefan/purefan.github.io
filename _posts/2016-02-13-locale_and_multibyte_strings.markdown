---
layout: post
title:  "Locale and multibyte strings"
date:   2016-02-13 19:01:09 +0100
categories: programming
excerpt: "Working with accentuated characters in c++"
keywords: "c++, unicode, multibyte"
---
{% if jekyll.environment == "production" %}
![Language](http://purefan.me/assets/img/language-01.png){: .float-left .inline-image}
{% else %}
![Language]({{ site.dev_url }}/assets/img/language-01.png){: .float-left .inline-image}
{% endif %}

Just a quick post, I've been working on my spare time (when any) in a side project that uses multibyte strings ("ä", "ö",...) and ran into an issue where changing a `wstring` to upper case did not throw an error but it also didn't work, for example `tjäna` became `TJäNA", which is a good effort but not what I was going for.

After many attempts at setting the locale correctly (and even changing my terminal's locale) I was able to fix it like this:

    #include <cstring>
    #include <iostream>

    int main() {
        std::locale::global(std::locale("sv_SE"));
        std::wstring original = L"tjäna";
        for (std::wstring::iterator it = original.begin(); it != original.end(); it++) {
            *it = towupper(*it);
        }
        std::wcout << "The changed word is " << original;
    }


If you get an error similar to:


    libc++abi.dylib: terminating with uncaught exception of type std::runtime_error: collate_byname<char>::collate_byname failed to construct for sv_SE
    Abort trap: 6


It basically means that you don't have the swedish locale available. If you use OSX you can chech the available locales running this in terminal: `locale -a`