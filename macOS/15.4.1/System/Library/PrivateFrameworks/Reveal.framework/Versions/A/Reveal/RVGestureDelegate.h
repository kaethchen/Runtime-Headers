@class NSString, RVPresentingContext, NSFindIndicator, RVItem;
@protocol NSImmediateActionAnimationController, NSObject, RVGestureDelegate;

@interface RVGestureDelegate : NSObject <NSImmediateActionAnimationController> {
    id<NSObject> _observer;
    NSFindIndicator<NSImmediateActionAnimationController> *_indicator;
}

@property (retain) id<NSImmediateActionAnimationController> actualGestureDelegate;
@property (retain) RVPresentingContext *presenter;
@property (retain) RVItem *item;
@property BOOL lookupFlavor;
@property (retain) id<RVGestureDelegate> specializedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)recognizerDidCancelAnimation:(id)a0;
- (void)recognizerDidDismissAnimation:(id)a0;
- (void)recognizerDidUpdateAnimation:(id)a0;
- (void)recognizerWillBeginAnimation:(id)a0;

@end
