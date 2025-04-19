@class NSString, PXScrollViewController;

@interface PXScrollViewSpeedometer : PXScrollSpeedometer <PXScrollViewControllerObserver>

@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isScrubbing;
- (id)initWithScrollController:(id)a0;
- (BOOL)isAnimatingScroll;
- (BOOL)isManuallyChanging;
- (void)scrollViewControllerDidEndScrolling:(id)a0;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)a0 towardsContentEdges:(unsigned long long)a1;
- (id)scrollview;

@end
