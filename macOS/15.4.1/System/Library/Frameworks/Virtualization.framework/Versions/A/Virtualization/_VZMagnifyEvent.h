@interface _VZMagnifyEvent : NSObject

@property (readonly) double magnification;
@property (readonly) unsigned long long phase;

- (id)initWithEvent:(id)a0;
- (id)initWithMagnification:(double)a0 phase:(unsigned long long)a1;

@end
