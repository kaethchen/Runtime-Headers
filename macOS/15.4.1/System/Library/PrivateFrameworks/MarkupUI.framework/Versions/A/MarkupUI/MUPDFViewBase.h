@class AKController, NSCursor;

@interface MUPDFViewBase : PDFView

@property (weak) AKController *annotationController;
@property (retain) NSCursor *annotationCursor;
@property BOOL restrainsMinZoomToViewSize;
@property (readonly) BOOL editable;

- (void).cxx_destruct;
- (void)copy:(id)a0;
- (void)cursorUpdate:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)selectAll:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)_annotationController;
- (void)setCursorForAreaOfInterest:(long long)a0;

@end
