@class AVTView, NSString, AVTStickerConfiguration, AVTLockscreenCoordinatorHistory, AVTLockscreenConfiguration, AVTAvatarPhysicalizedPose, NSObject, AVTAvatar, AVTAvatarPoseAnimation, AVTAvatarPose;
@protocol OS_dispatch_queue, AVTAvatarPoseAnimationController;

@interface AVTLockscreenAvatarCoordinator : NSObject {
    AVTView *_view;
    AVTAvatar *_avatar;
    NSObject<OS_dispatch_queue> *_queue;
    AVTAvatarPhysicalizedPose *_initialPose;
    AVTStickerConfiguration *_initialStickerConfiguration;
    NSString *_initialFramingMode;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialPostProjectionTransform;
    long long _state;
    unsigned long long _animationIndex;
    unsigned long long _secondaryAnimationIndex;
    AVTAvatarPose *_currentStaticPose;
    AVTAvatarPoseAnimation *_currentAnimatedPose;
    id<AVTAvatarPoseAnimationController> _currentAnimatedPoseController;
    double _lastTransitionTimestamp;
    AVTLockscreenCoordinatorHistory *_sharedHistory;
    AVTLockscreenConfiguration *_configuration;
    id /* block */ _debugAnimationIdentifierObserverBlock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)timingAnimation;
- (void)_initWithStickerConfiguration:(id)a0 pose:(id)a1 framingMode:(id)a2 screenNumber:(id)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)debugAnimationIdentifier;
- (id)initWithAvatarDescriptor:(id)a0 stickerConfiguration:(id)a1 pose:(id)a2 framingMode:(id)a3 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 view:(id)a5 queue:(id)a6 sharedHistory:(id)a7 completionQueue:(id)a8 completionHandler:(id /* block */)a9;
- (void)performAnimationIdentifierObserverBlock;
- (unsigned long long)primaryStateForState:(long long)a0;
- (void)scheduleTransitionToAnotherPickerForCurrentTransitionTimestamp:(double)a0 currentPickerAnimationPeriod:(double)a1;
- (void)scheduleTransitionToAnotherSelectedForCurrentTransitionTimestamp:(double)a0 currentPickerAnimationPeriod:(double)a1;
- (void)scheduleTransitionToState:(long long)a0 delay:(double)a1 animationIndex:(unsigned long long)a2 duration:(double)a3;
- (void)scheduleTransitionToState:(long long)a0 delay:(double)a1 animationIndex:(unsigned long long)a2 duration:(double)a3 timingFunction:(id)a4;
- (void)scheduleTransitionToUniqueForCurrentTransitionTimestamp:(double)a0;
- (BOOL)stateAlwaysTransitionsFromOrToSnapshot:(long long)a0;
- (double)transitionToState:(long long)a0 animationIndex:(unsigned long long)a1 duration:(double)a2 timingFunction:(id)a3;
- (double)transitionToState:(long long)a0 animationIndex:(unsigned long long)a1 duration:(double)a2 timingFunction:(id)a3 outPlayedAnimationDuration:(double *)a4;
- (double)writeTransitionTimestamp;

@end
