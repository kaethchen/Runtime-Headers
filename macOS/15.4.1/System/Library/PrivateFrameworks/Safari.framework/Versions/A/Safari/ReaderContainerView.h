@class ReaderWKView;

@interface ReaderContainerView : NSView

@property (weak, nonatomic) ReaderWKView *readerWKView;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;

@end
