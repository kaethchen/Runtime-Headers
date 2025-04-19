@interface _VZTouch : NSObject

@property (readonly) unsigned char index;
@property (readonly) long long phase;
@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) long long swipeAim;
@property (readonly) double timestamp;

- (id)initWithView:(id)a0 index:(unsigned char)a1 phase:(long long)a2 location:(struct CGPoint { double x0; double x1; })a3 swipeAim:(long long)a4 timestamp:(double)a5;

@end
