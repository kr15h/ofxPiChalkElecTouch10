ofxPiChalkElecTouch10
=====================

Introduction
------------
openFrameworks addon for making use of the [Chalkboard Electronics 10 inch touchscreen](http://www.chalk-elec.com/?page_id=1280#!/~/product/category=3094861&id=14647624) on the Raspberry Pi. This is a quick hack of the ofAppEGLWindow class and can be improved in many ways. For now I just needed the mousePressed funcion to detect touches. I know that a better way could be to implement the whole range of touch events, I'll leave it for later.

This screen supports multi-touch input, but to use that, one has to add some extra code to ofAppEGLWindow. Later.

Installation
------------
Clone this repository to the addons directory of your openFrameworks installation:
```
cd /home/pi/openFrameworks/addons
git clone https://github.com/kr15h/ofxPiChalkElecTouch10.git
```
To launch the example, navigate to the example directory and compile:
```
cd /home/pi/openFrameworks/addons/ofxPiChalkElecTouch10/example
make && make run
```

Dependencies
------------
Just get the touchscreen.

Compatibility
------------
Works with oF 0.8.0, 0.8.1.

Known issues
------------
I think it is possible that the touch input device can be mapped to something different than `/dev/input/event1`. This addon uses just that. Other available input devices under `/dev/input` did not work and I was not sure how to improve the searching algorithm neither. 

Version history
------------

### Version 0.1 (Date):
Very quick and dirty implementation of mousePressed, mouseReleased and mouseDragged events. It should be transformed into touchDown, touchUp and touchDrag.



