@class QLAnimationWindowEffect, NSWindow;
@protocol QLPreviewPanelDataSource;

@interface QLPreviewPanelReserved : NSObject {
    BOOL ignoreOpenAndClose;
    QLAnimationWindowEffect *currentEffect;
    int openingEffect;
    int defaultEffect;
    BOOL ignorePanelFrameChanges;
    double openingTime;
    id<QLPreviewPanelDataSource> dataSource;
    id currentController;
    NSWindow *linkedWindow;
    BOOL makeKeyWindow;
    NSWindow *backgroundFocusWindow;
    int focusMode;
    QLAnimationWindowEffect *backgroundFocusEffect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastShapedBounds;
    BOOL panelHasBeenSetup;
    short deferredClosing;
    int deferredClosingEffect;
    int transient;
    BOOL positionNearPreviewItem;
    BOOL loadingForForceTouch;
    struct __CFMachPort { } *_mouseDownEventTapPort;
    struct __CFRunLoopSource { } *_mouseDownEventTapSource;
    id /* block */ _mouseDownCallback;
    id /* block */ panelDidCloseCompletionBlock;
    BOOL isClosing;
}

- (void).cxx_destruct;

@end
