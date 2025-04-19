@class NSImage;

@interface VFXUIImagePicker : NSView {
    id _contents;
    NSImage *_image;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;

+ (id)imageContentsWithPasteboard:(id)a0;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)changeColor:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (BOOL)resignFirstResponder;
- (void)launchImagePicker;

@end
