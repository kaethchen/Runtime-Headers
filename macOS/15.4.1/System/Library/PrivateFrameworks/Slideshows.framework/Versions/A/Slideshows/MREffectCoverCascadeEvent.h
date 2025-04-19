@interface MREffectCoverCascadeEvent : NSObject {
    char relativeX;
    char relativeY;
    unsigned char type;
    double relativeStartTime;
    double duration;
}

- (id)initWithRelativeX:(char)a0 relativeY:(char)a1 type:(unsigned char)a2 relativeStartTime:(double)a3 andDuration:(double)a4;

@end
