@class NSString, NSView, CALayer;
@protocol VisualTabPickerRootViewTransitionCoordinatorDataSource;

@interface VisualTabPickerRootViewTransitionCoordinator : NSObject <VisualTabPickerTransitioning> {
    NSView *_topBarView;
    CALayer *_tileContainerLayer;
}

@property (readonly, weak, nonatomic) id<VisualTabPickerRootViewTransitionCoordinatorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)setTransitionProgress:(float)a0;
- (void)transitionDidEnd;
- (void)transitionWillBegin;

@end
