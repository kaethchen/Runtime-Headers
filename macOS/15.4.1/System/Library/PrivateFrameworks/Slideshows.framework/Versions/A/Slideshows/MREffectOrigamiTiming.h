@class NSString, NSArray;

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming> {
    NSString *_effectID;
    NSArray *_description;
    NSArray *_animationTimeBounds;
    double _durationStretchFactor;
    double _slideTimings[8][2];
    double _defaultPhaseInDuration;
    double _defaultMainDuration;
    double _defaultPhaseOutDuration;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

- (void)dealloc;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (id)initWithEffectID:(id)a0;
- (double)lowestDisplayTime;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;

@end
