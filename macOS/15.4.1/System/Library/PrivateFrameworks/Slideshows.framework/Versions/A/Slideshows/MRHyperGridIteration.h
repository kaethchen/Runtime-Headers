@interface MRHyperGridIteration : NSObject {
    unsigned char layout;
    unsigned char slideCount;
    unsigned char slideIndex[3];
    long long direction;
    long long index;
    double duration;
    long long panoCount;
    double panoDurations[3];
    double startTime;
    BOOL hasBreak;
}

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (id)description;
- (void)setLayout:(unsigned char)a0;

@end
