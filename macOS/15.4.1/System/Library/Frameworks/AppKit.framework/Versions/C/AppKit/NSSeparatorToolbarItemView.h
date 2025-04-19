@class CALayer, NSTrackingSeparatorToolbarItem, NSTrackingArea;

@interface NSSeparatorToolbarItemView : NSView {
    BOOL _alignmentSatisfied;
    BOOL _fullHeightDividersDisabled;
    unsigned long long _controlSize;
    unsigned long long _displayMode;
    CALayer *_divider;
    NSTrackingArea *_cursorArea;
}

@property (weak) NSTrackingSeparatorToolbarItem *item;
@property (getter=isAlignmentSatisfied) BOOL alignmentSatisfied;
@property BOOL fullHeightDividersDisabled;
@property unsigned long long controlSize;
@property unsigned long long displayMode;
@property (readonly) double _dividerHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isOpaque;
- (void)pan:(id)a0;
- (void)resetCursorRects;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
