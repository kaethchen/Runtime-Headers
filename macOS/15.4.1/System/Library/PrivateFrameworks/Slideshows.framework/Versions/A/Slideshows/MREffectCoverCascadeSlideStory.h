@class NSString;

@interface MREffectCoverCascadeSlideStory : NSObject {
    double birthStart;
    double birthDuration;
    double deathStart;
    double deathDuration;
    float deathParameter;
    NSString *slideID;
    unsigned long long slideIndex;
    unsigned char x;
    unsigned char y;
    unsigned char birthType;
    unsigned char deathType;
}

- (void)dealloc;
- (id)initWithSlideIndex:(unsigned long long)a0 x:(unsigned long long)a1 y:(unsigned long long)a2 birthType:(unsigned long long)a3 birthStart:(double)a4 birthDuration:(double)a5;

@end
