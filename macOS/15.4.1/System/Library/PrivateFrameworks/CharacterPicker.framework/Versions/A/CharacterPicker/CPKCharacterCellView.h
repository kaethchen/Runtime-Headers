@class NSString, NSTextField;

@interface CPKCharacterCellView : CPKDraggableView

@property (copy, nonatomic) NSString *characterString;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSTextField *textField;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingFrame;
- (struct CGSize { double x0; double x1; })cellBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)_setUpTextField;
- (id)initWithCharacterString:(id)a0 fontSize:(double)a1 frameSize:(struct CGSize { double x0; double x1; })a2;
- (id)pasteboardItemFont;
- (id)pasteboardItemString;

@end
