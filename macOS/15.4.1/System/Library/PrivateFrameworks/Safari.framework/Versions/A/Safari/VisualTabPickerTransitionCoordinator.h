@class NSString, NSMutableArray;
@protocol VisualTabPickerTransitionCoordinatorDelegate;

@interface VisualTabPickerTransitionCoordinator : NSObject <VisualTabPickerTransitioning> {
    NSMutableArray *_coordinators;
}

@property (weak, nonatomic) id<VisualTabPickerTransitionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setTransitionProgress:(float)a0;
- (void)addChildTransitionCoordinator:(id)a0;
- (void)transitionDidEnd;
- (void)transitionNeedsUpdate;
- (void)transitionWillBegin;

@end
