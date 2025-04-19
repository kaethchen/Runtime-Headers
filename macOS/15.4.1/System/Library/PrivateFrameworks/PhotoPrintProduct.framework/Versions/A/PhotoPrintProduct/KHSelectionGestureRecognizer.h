@class NSEvent;

@interface KHSelectionGestureRecognizer : NSGestureRecognizer

@property (nonatomic) BOOL extending;
@property (retain, nonatomic) NSEvent *recognitionEvent;

- (void).cxx_destruct;
- (void)reset;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;

@end
