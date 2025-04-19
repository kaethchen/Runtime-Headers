@interface WidgetRenderer.LiveWidgetContentViewController : WidgetRenderer.BaseWidgetContentViewController {
    void /* unknown type, empty encoding */ widget;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ _isSnapshotting;
    void /* unknown type, empty encoding */ hasAnimatableContent;
    void /* unknown type, empty encoding */ _areAnimationsPaused;
    void /* unknown type, empty encoding */ _animationsDisabledPreferenceObserver;
    void /* unknown type, empty encoding */ _cachedAnimationsDisabledPreference;
    void /* unknown type, empty encoding */ _rootViewModel;
    void /* unknown type, empty encoding */ isForeground;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
