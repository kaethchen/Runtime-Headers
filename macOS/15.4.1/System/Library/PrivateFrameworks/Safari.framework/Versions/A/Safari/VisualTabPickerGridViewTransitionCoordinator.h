@class NSString, CALayer;
@protocol VisualTabPickerGridViewTransitionCoordinatorDataSource, VisualTabPickerTransitioning;

@interface VisualTabPickerGridViewTransitionCoordinator : NSObject <VisualTabPickerTransitioning> {
    CALayer *_transitioningLayer;
    id<VisualTabPickerTransitioning> _destinationTileTransitionCoordinator;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _fixedPoints[2];
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _interceptPoint;
    float _interceptProgress;
    BOOL _detachedFromFixedPointTimeline;
}

@property (readonly, weak, nonatomic) id<VisualTabPickerGridViewTransitionCoordinatorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)setTransitionProgress:(float)a0;
- (void)_recomputeFixedPoints;
- (void)transitionDidEnd;
- (void)transitionNeedsUpdate;
- (void)transitionWillBegin;

@end
