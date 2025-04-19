@class NSSet, SCDAGoodnessScoreOverrideContext;

@interface SCDAGoodnessScoreContext : NSObject {
    SCDAGoodnessScoreOverrideContext *_overriddenContext;
}

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic) BOOL recentlyWonBySmallAmount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)getOverridingContext;
- (void)setOverridingContext:(id)a0;

@end
