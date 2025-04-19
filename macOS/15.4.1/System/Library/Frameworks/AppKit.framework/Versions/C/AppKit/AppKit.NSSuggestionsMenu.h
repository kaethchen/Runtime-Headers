@class NSAppearance;

@interface AppKit.NSSuggestionsMenu : NSObject <NSAppearanceCustomization> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ positioningRect;
    void /* unknown type, empty encoding */ _highlightedItem;
    void /* unknown type, empty encoding */ windowController;
    void /* unknown type, empty encoding */ positioningView;
    void /* unknown type, empty encoding */ positioningViewGeometryInWindowObserver;
    void /* unknown type, empty encoding */ localEventMonitor;
    void /* unknown type, empty encoding */ windowResignKeyObserver;
    void /* unknown type, empty encoding */ observingMenuUp;
    void /* unknown type, empty encoding */ preferredScrollerStyleDidChangeNotificationObserver;
    void /* unknown type, empty encoding */ listenToPreferredScrollerStyleDidChangeNotification;
    void /* unknown type, empty encoding */ listenToPositioningViewEffectiveAppearanceDidChange;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ appearance;
@property (nonatomic, readonly) NSAppearance *effectiveAppearance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_anotherMenuWentUp:(id)a0;

@end
