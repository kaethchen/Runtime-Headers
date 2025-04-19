@protocol PEAsset, PELivePortraitBehaviorDelegate;

@interface PELivePortraitBehaviorController : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (weak, nonatomic) id<PELivePortraitBehaviorDelegate> delegate;
@property (nonatomic) BOOL changingPortraitLightingDisablesLive;
@property (readonly, nonatomic) BOOL hasDepth;
@property (readonly, nonatomic) BOOL hasLive;
@property (readonly, nonatomic) BOOL hasLivePortrait;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 delegate:(id)a1 hasDepth:(BOOL)a2 hasLive:(BOOL)a3;
- (void)applySideEffectsForAction:(unsigned long long)a0 compositionController:(id)a1;
- (id)confirmationWarningStringForAction:(unsigned long long)a0 compositionController:(id)a1;

@end
