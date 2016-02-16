---
layout: post
title:  "Barnyard2 and sid-msg.map warnings"
date:   2016-02-08 11:01:09 +0100
categories: infosec snort barnyard2 reporting
excerpt: "Working with accentuated characters in c++"
keywords: "c++, unicode, multibyte"
---


Im posting this ahead of time, my plan was to write a few more articles about hydra and then about Snort, but after struggling with setting up Barnayrd2 I finally made progress today and thought others might run into the same issue as me.

The problem is that after following [the official snort installation guide][1], Barnyard2 threw the following warnings:

    WARNING: invalid Reference spec '001'. Ignored
    WARNING: invalid Reference spec 'icmp-event'. Ignored
    WARNING: invalid Reference spec '0'. Ignored
    WARNING: invalid Reference spec 'ICMP Test detected'. Ignored


It didn't take long to figure out that this was related to the sid-msg.map file, but since I copied it from the manual I couldn't see what was wrong with it.

After looking into [the source code][2] I understood that Barnyard2 requires the file sid-msg.map to be comma separated, I tried to find an example of this file but the interwebs were not helpful but after reading [this very helpful post by beenph][3] I came up with this sid-msg.map that works for me (the warnings are gone):

{% highlight bash %}
gid,1 || sid,10000001 || ref,001 || classification,icmp-event || priority,0 || msg,ICMP Test detected || url,tools.ietf.org/html/rfc792
{% endhighlight %}

The idea is that there are 7 variables to set, each separated from its value by a comma, and each pair separated by double pipe (\|\|), so for example:

* _gid = 1_ becomes `gid,1`
* _sid = 10000001_ becomes `sid,10000001`
* and so on...


Hope it helps


[1]: https://snort.org/documents/snort-2-9-8-x-on-ubuntu-12-lts-and-14-lts-and-15
[2]: https://github.com/firnsy/barnyard2/blob/40b046d2d814ab6a75e218a10bc5272149362158/src/map.c
[3]: http://seclists.org/snort/2013/q3/815