@class NSMapTable, AVTLockscreenCoordinatorHistory, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVTLockscreenCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AVTLockscreenCoordinatorHistory *_history;
    NSMutableArray *_coordinators;
    NSMapTable *_deprecatedAvatarToViewMapping;
}

+ (id)preferredViewOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)addAvatarWithDescriptor:(id)a0 forView:(id)a1 pose:(id)a2 framingMode:(id)a3 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 completionQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)addAvatarWithDescriptor:(id)a0 forView:(id)a1 stickerConfiguration:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)addDebugAnimationIdentifierObserverForView:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)coordinatesAvatarForView:(id)a0;
- (void)removeAvatarForView:(id)a0;
- (void)transitionToIdle;
- (void)transitionToMouseInteractionForView:(id)a0;
- (void)transitionToPasswordFailureForView:(id)a0;
- (void)transitionToPasswordSuccessForView:(id)a0;
- (void)transitionToPasswordWatchingForView:(id)a0;
- (void)transitionToUserPicker;
- (void)transitionToUserSelectedForView:(id)a0;
- (void)transitionToUserSelectedForView:(id)a0 distanceFromDestinationToSource:(float)a1 timingFunctionName:(id)a2 duration:(double)a3;
- (id)_deprecatedViewForAvatar:(id)a0;
- (void)addAvatar:(id)a0 forView:(id)a1 initialPose:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)addAvatar:(id)a0 forView:(id)a1 pose:(id)a2 framingMode:(id)a3 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 completionQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)addAvatar:(id)a0 forView:(id)a1 stickerConfiguration:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)addDebugAnimationIdentifierObserverForAvatar:(id)a0 withBlock:(id /* block */)a1;
- (void)splitTimingFunctionWithName:(id)a0 intoFirstHalfTimingFunction:(id *)a1 secondHalfTimingFunction:(id *)a2;
- (void)transitionFromPictureToUserPickerForAvatar:(id)a0;
- (void)transitionFromPictureToUserPickerForView:(id)a0;
- (void)transitionToMouseInteractionForAvatar:(id)a0;
- (void)transitionToPasswordFailureForAvatar:(id)a0;
- (void)transitionToPasswordSuccessForAvatar:(id)a0;
- (void)transitionToPasswordWatchUnlockForAvatar:(id)a0;
- (void)transitionToPasswordWatchUnlockForView:(id)a0;
- (void)transitionToPasswordWatchingForAvatar:(id)a0;
- (void)transitionToProfilePicture;
- (void)transitionToUserPickerForAvatar:(id)a0 distanceFromDestinationToSource:(float)a1 timingFunctionName:(id)a2 duration:(double)a3;
- (void)transitionToUserPickerForView:(id)a0;
- (void)transitionToUserPickerForView:(id)a0 distanceFromDestinationToSource:(float)a1 timingFunctionName:(id)a2 duration:(double)a3;
- (void)transitionToUserPickerForView:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)transitionToUserSelectedForAvatar:(id)a0;
- (void)transitionToUserSelectedForAvatar:(id)a0 distanceFromDestinationToSource:(float)a1 duration:(double)a2;
- (void)transitionToUserSelectedForAvatar:(id)a0 distanceFromDestinationToSource:(float)a1 timingFunctionName:(id)a2 duration:(double)a3;
- (void)transitionToUserSelectedForAvatar:(id)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)transitionToUserSelectedForView:(id)a0 duration:(double)a1 timingFunction:(id)a2;

@end
