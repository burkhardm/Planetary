Planetary
==

For a fresh checkout, do:

	`git submodule init`
	`git submodule update`

Cinder 0.8.5 support
--

The following settings were required for building Planetary with Xcode 4.6.3 and Cinder 0.8.5:

1. Menu > Editor > Validate Settings > Update Settings (adds C++ Build Settings)
2. Project > Targets > Planetary
3. Build Settings > Architectures > Standard (armv7, armv7s)
4. Build Settings > Build Active Architecture Only > No
5. Build Settings > Valid Architectures > armv7
6. Build Settings > iOS Deployment Target > iOS 5.0 (required for libc++)
7. Build Settings > C++ Language Dialect > C++11
8. Build Settings > C++ Standard Library > libc++
9. Build Settings > Enable C++ Exceptions > Yes
10. Build Settings > define CINDER_PATH_username
11. Build Phases > Link Binary With Libraries > Add MobileCoreServices.framework
12. Build Phases > Link Binary With Libraries > Add ImageIO.framework

I didn't have to update Flurry by setting Valid Architectures to armv7. However, I had to comment out some older touch routines in BloomScene.cpp and GestureRecognizer.h. Please note, that this will lead to updates in the submodules.

See also
--

* [Planetary: collecting and preserving code as a living object](https://www.cooperhewitt.org/object-of-the-day/2013/08/26/planetary-collecting-and-preserving-code-living-object) (Cooper-Hewitt Object of the Day weblog)
* [Planetary object page on the Cooper-Hewitt collections website](http://collection.cooperhewitt.org/objects/35520989/)
* [Planetary extras](https://github.com/cooperhewitt/PlanetaryExtras)
