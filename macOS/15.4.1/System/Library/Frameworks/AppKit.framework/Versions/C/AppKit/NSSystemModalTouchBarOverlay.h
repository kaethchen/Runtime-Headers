@class NSFunctionRow, NSTouchBarItem, NSFunctionRowBackgroundColorView, NSTouchBar, NSStackView, NSTouchBarViewController;

@interface NSSystemModalTouchBarOverlay : NSObject {
    NSFunctionRow *_functionRow;
    NSTouchBar *_touchBar;
    NSTouchBarViewController *_viewController;
    NSFunctionRowBackgroundColorView *_colorView;
    NSStackView *_escKeyViewer;
    NSTouchBarItem *_escKeyReplacementItem;
    NSTouchBarItem *_systemCloseButtonItem;
    BOOL _useOverlayAnimations;
    BOOL _showsCloseWhenInactive;
    BOOL _isObservingEscapeReplacement;
    BOOL _isObservingActiveState;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dismiss;
- (void)_removeObservers;
- (void)_updateCloseButton;
- (void)minimize;
- (void)showTouchBar:(id)a0 placement:(long long)a1 systemTrayIdentifier:(id)a2;

@end
