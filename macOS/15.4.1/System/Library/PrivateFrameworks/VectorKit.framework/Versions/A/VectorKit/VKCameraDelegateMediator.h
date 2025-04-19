@class NSString;
@protocol VKMapViewCameraDelegate;

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraAccessManagedDelegate> {
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _regionChangeState;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _pinchingAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _panningAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _rotatingAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _pitchAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _animationAccess;
    struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *__ptr_; struct __shared_weak_count *__cntrl_; } _object; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _firstAccess; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _lastAccess; } _directAccess;
}

@property (weak, nonatomic) id<VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL isChangingMapType;
@property (readonly, nonatomic) const void *regionChangeState;
@property (readonly, nonatomic) unsigned long long regionChangeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerWillPerformZoomBounceAnimation;
- (void)didEndAnimatingAccess;
- (void)didEndPanningAccess;
- (void)didEndPinchingAccess;
- (void)didEndPitchingAccess;
- (void)didEndRegionChangeAccess:(void *)a0;
- (void)didEndRotatingAccess;
- (void)popAccess:(void *)a0;
- (void)pushAccess:(void *)a0 animated:(BOOL)a1;
- (void)willBeginAnimatingAccess;
- (void)willBeginPanningAccess;
- (void)willBeginPinchingAccess;
- (void)willBeginPitchingAccess;
- (struct ReferenceCountedAccess<md::VKCameraRegionChange> { struct shared_ptr<md::VKCameraRegionChange> { struct VKCameraRegionChange *x0; struct __shared_weak_count *x1; } x0; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; struct function<void (md::VKCameraRegionChange &)> { struct __value_func<void (md::VKCameraRegionChange &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x2; })willBeginRegionChangeAccess:(BOOL)a0;
- (void)willBeginRotatingAccess;

@end
