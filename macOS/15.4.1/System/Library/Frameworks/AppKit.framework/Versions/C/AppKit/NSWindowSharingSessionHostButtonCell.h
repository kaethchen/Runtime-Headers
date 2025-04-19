@class NSString, NSTrackingArea, NSMenu, NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButtonCell : NSButtonCell <NSMenuDelegate> {
    BOOL _isMouseInside;
    BOOL _recordingStyle;
    NSMenu *_popupMenu;
    NSTrackingArea *_exitTrackingArea;
    BOOL _trackingMouseDown;
    BOOL _showedMenuForMouseDown;
}

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_visualProviderClass;
+ (Class)bezelConfigurationClass;

- (void).cxx_destruct;
- (id)target;
- (SEL)action;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (BOOL)_hasRolloverBezelArt;
- (void)_hoverTriggeredShowMenu;
- (BOOL)_isMouseInControlView;
- (id)_themeButton;
- (id)bezelConfigurationInView:(id)a0 appearance:(id)a1;
- (unsigned long long)bezelStyle;
- (void)closeMenu;
- (unsigned long long)imagePosition;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)recordingStyle;
- (void)setRecordingStyle:(BOOL)a0;
- (void)showMenu;
- (void)showMenu:(id)a0;
- (void)startTrackingHover;
- (void)stopTrackingHover;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
