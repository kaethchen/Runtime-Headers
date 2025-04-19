@class NSImageView, NSTextField, NSPopover, NSButton, NSStackView;

@interface _NSDebugTouchBarTableCellView : NSTableCellView {
    NSButton *_quickLookButton;
    NSImageView *_statusImageView;
    NSStackView *_statusStack;
    NSPopover *_inspectorPopover;
}

@property (retain) NSTextField *secondaryLabel;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)showInspectorPopover:(id)a0;

@end
