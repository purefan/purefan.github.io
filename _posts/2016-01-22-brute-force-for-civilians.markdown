---
layout: post
title:  "Brute Forcing for civilians - A soft intro"
date:   2016-01-21 19:01:09 +0100
categories: infosec penetration-testing offensive-security brute-force
---
![Keys]({{ site.url }}:4000/assets/img/keys-01.jpg){: .float-left .inline-image}

Have you ever been given a set of keys and forgot which one was the one that opened the door, then you started going through all of the keys one by one? Well, thats brute force right there. You try every single possibility because you know eventually, you will find the right key.

When it comes to information security and passwords, brute force is exactly the same, you try every possible combination of letters, numbers and symbols, in order to gain access. It is a failproof approach, by going through every single combination of letters, numbers and symbols you are sure to find _the_ password that you're looking for. But the problem is exactly that, you are going through _every single combination_, and that takes time... a lot of it.

Unless an attacker is specially motivated they will not want to wait days, weeks or months for a brute force to yield one result, imagine having a program puking random letters non-stop for hours... *you* as an attacker are not doing anything but waiting... there's no glory in this part. The thing is that, passwords more often than not, [resemble or use common words][common-passwords], passwords look like "monkey", or "trustno1", and this _human vulnerability_ of using common words is what makes a brute force attack easier to carry out, because then attackers dont need to try for inhuman passwords, they can mix common words with salt and pepper and come up with a very decent list of possible passwords, so instead of trying for "AAAAAA" and "AAAAAB" in dumb sequence, they can try for "m4ster", "St4rw4rs!", "passw0rd!" (By the way, if any of your passwords look like these 3 let me just say they are not bullet proof).

The list of possible passwords may still be in the thousands, but that is nothing compared to the trillions of _inhuman_ options. Still, being safe is easier than you may think, dont try to come up with a super complex password that you wont remember, use a password manager instead (Im not going to endorse any but do a [google search][google-password-manager] and it will give you a gazillion results), some are free, some have add-ons (like sharing an account with a mobile device) and these companies live off security, so they try their hardest to stay safe and keep your passwords safe, their entire business depends on it... now thats a lot of effort to make your life easier isn't it?

{% comment %}
If you're interested in learning more about brute force attacks you should read my other article ["How to run a brute force attack with hydra"]({% post_url 2016-01-22-how-to-brute-force-with-hydra %}).
{% endcomment %}

All the best and take care

[common-passwords]: http://gizmodo.com/the-25-most-popular-passwords-of-2014-were-all-doomed-1680596951
[google-password-manager]: http://lmgtfy.com/?q=password+manager
