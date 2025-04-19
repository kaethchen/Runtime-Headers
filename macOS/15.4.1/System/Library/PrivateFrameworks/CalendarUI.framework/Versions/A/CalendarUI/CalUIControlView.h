@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (id)init;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)resignFirstResponder;

@end
