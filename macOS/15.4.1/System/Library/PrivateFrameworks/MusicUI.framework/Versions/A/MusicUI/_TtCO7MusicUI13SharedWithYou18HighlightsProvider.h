@interface _TtCO7MusicUI13SharedWithYou18HighlightsProvider : NSObject <SLHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ _onHighlightsChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightCenter;
    void /* unknown type, empty encoding */ subscriptionStatusCoordinator;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ hasStarted;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _highlights;
    void /* unknown type, empty encoding */ _highlightByID;
}

- (id)init;
- (void).cxx_destruct;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterDidAddHighlights:(id)a0;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;

@end
