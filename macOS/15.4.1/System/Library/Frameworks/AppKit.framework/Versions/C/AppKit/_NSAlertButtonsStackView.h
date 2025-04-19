@class NSTrackingArea;

@interface _NSAlertButtonsStackView : NSStackView {
    NSTrackingArea *_rolloverTrackingArea;
    BOOL _rolloverBehaviorEnabled;
}

@property BOOL rolloverBehaviorEnabled;

- (void)dealloc;
- (BOOL)_mouseIsInsideButton:(id)a0 event:(id)a1;
- (void)_updateSeparatorVisibility:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;

@end
