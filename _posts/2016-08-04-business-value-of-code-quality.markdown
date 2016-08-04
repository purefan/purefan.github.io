---
layout: post
title:  Business Value of Code Quality"
date:   2016-08-04 10:01:09 +0100
categories: business
excerpt: "How much value does good code give to the enterprise"
keywords: "code quality, money"
---



Companies who profit on IT services or products are always urged to produce quickly in order to sell quickly. In the early stages of every company this is even more pronounced, and code quality is among the last in the list of priorities among sleeping and eating (we call this the "glory" of being in a startup).

But what is often overlooked is that poorly written code and lack of documentation hinders future development which in turn actually costs money to the company, here is a small breakdown of what my experience has (painfully) taught me

## Poor Architecture
When you're just starting a project, and you have different sources of stress (stakeholders, deadlines, personal situations,...) you "can't" afford to plan how your project is going to look in 1, 3 or 5 years, you need it done pronto, so in the heat of the moment it is easy to glue something together, put some makeup on it and demo it asap. But with the passing of time more components get developed, more dependencies get added and more integrations are completed, all of this adds weight to a fragile foundation, it really is like playing Jenga, you end up spending a lot of time just very carefully building on top of a very delicate surface.
Lack of Documentation
In a tiny team maybe you have one or two gurus doing all the architecture, all the coding... if anything breaks or anything needs to be done you know you can count on them. But what happens when the project grows bigger and other members join the team? they need training, they need to get to know how everything is connected and how the internals work. An optimistic manager will say "You can always ask guru-number-one", and that is usually true, unless guru-number-one is gone or sick or doesn't get along with the new guy or is simply too busy or the new guy is not great at asking for help, or worse, the system has grown too big and it becomes necessary for the new guy to ask dozens of questions a day and lets face it, as a new guy you want to impress your manager and asking too much is often not taken very kindly... The effect of a poorly documented system is that new people spend a lot of time reading source code and making sense of a big mesh of components, often creating frustration and at worse affecting the self confidence of the new member. In my own experience it's very common to use weekends and nights figuring out the system that we're handed.

## Poor Code Quality
This one is not immediately obvious, but with enough time poorly written software needs to be rewritten or discarded. The worse the code is, the quicker it has to be replaced. This is not to say that new technologies would do a better job, what I mean is that low quality code becomes impossible to work with, be it becomes new developers are not used to dealing with such legacy systems or because it is so bad, that building on top of it brings more tears that results, please allow me to clarify, I am not exaggerating, I have first hand seen very talented developers on the verge of quitting due to having to deal with systems like this, actual headaches are not uncommon and the stress doesn't clock out at 5pm.
Now there's another situation, if we look at this strictly from the management team's point of view what they see is that in the early stages of the business things happen really fast, new features are added within a day and everything is awesome, but a few years later everything takes longer to be done, suddenly you need a whole team to add a tiny feature and you wonder if the new members of the team are as good as the original people.
Build for your future company
There are 2 things that you need to know to guarantee a continued smooth development: Code Smells and Communication.
We call "Code Smells" to pieces of code that are less-than-great, these code smells only serve to confuse people unfamiliar with the system and there are tools to scan and identify these code smells, for example SonarQube or Squale, they usually go by the name Quality Management Tools.

Training a new member has at least 2 mediums: written (code comments and manuals) and verbal with the trainer explaining one-to-one.