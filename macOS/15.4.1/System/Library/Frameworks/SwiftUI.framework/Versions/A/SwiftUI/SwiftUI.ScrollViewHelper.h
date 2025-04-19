@interface SwiftUI.ScrollViewHelper : NSObject <NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ _layoutState;
    void /* unknown type, empty encoding */ _phaseState;
    void /* unknown type, empty encoding */ _prefetchState;
    void /* unknown type, empty encoding */ _containerSize;
    void /* unknown type, empty encoding */ axes;
    void /* unknown type, empty encoding */ lastEnvironment;
    void /* unknown type, empty encoding */ properties;
    void /* unknown type, empty encoding */ contentMargins;
    void /* unknown type, empty encoding */ scrollContentBackground;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ hasScrollPosition;
    void /* unknown type, empty encoding */ defaultDismissKeyboardMode;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ decelerationBias;
    void /* unknown type, empty encoding */ beginPanningOffset;
    void /* unknown type, empty encoding */ isAnimationCheckPending;
    void /* unknown type, empty encoding */ lastTargetOffsetState;
    void /* unknown type, empty encoding */ lastPhase;
    void /* unknown type, empty encoding */ lastVelocity;
    void /* unknown type, empty encoding */ lastOffsetChange;
    void /* unknown type, empty encoding */ lastBoundsSize;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollIndicatorObserver;
}

- (id)init;
- (void).cxx_destruct;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)didEndLiveScrollingWithNotification:(id)a0;
- (void)willStartLiveScrollingWithNotification:(id)a0;

@end
