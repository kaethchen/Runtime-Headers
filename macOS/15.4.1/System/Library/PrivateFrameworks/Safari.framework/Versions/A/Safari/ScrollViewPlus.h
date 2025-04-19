@class NSString, NSMutableSet;

@interface ScrollViewPlus : NSScrollView <NSScrollViewDelegate> {
    NSMutableSet *_observers;
}

@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didBeginScrollInScrollView:(id)a0;
- (void)didEndScrollInScrollView:(id)a0;
- (void)didScrollInScrollView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scrollViewPlusCommonInit;
- (void)addScrollObserver:(id)a0;
- (void)removeScrollObserver:(id)a0;

@end
