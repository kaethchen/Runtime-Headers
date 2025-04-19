@class NSTrackingArea, ICTableAttachmentViewController;

@interface ICTableSelectionKnob : NSView

@property (nonatomic, getter=isHovering) BOOL hovering;
@property (retain, nonatomic) NSTrackingArea *mouseTrackingArea;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL isEnd;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cursorUpdate:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleRect;
- (id)initWithTableAttachmentViewController:(id)a0;
- (void)updateAccentColor;

@end
