@class NSTextField, NSPopUpButton, NSRulerView, NSWindow;

@interface NSRulerViewAccessibilityPanelController : NSObject {
    NSTextField *_valueField;
    NSPopUpButton *_markerTypeButton;
    NSRulerView *_rulerView;
}

@property (retain, setter=_setAccessibilityPanel:) NSWindow *_accessibilityPanel;

- (void)dealloc;
- (void)_addMarker:(id)a0;
- (void)_cancelAddMarker:(id)a0;
- (id)_markerTypeButton;
- (id)_valueField;
- (id)initWithRulerView:(id)a0;
- (void)set_accessibilityPanel:(id)a0;

@end
