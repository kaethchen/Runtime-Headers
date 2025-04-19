@interface _VZRotationEvent : NSObject

@property (readonly) double rotation;
@property (readonly) unsigned long long phase;

- (id)initWithEvent:(id)a0;
- (id)initWithRotation:(double)a0 phase:(unsigned long long)a1;

@end
