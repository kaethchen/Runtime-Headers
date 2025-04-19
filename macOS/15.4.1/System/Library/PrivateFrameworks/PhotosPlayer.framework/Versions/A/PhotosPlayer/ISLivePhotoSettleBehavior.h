@protocol ISLivePhotoSettleBehaviorDelegate;

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate;

- (long long)behaviorType;
- (void)_didFinish;
- (void)settle:(BOOL)a0;

@end
