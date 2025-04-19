@interface QCImageView : NSImageView

- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)_canCreateImageFromPasteboard:(id)a0;
- (BOOL)_copyImage;
- (void)_loadImage;
- (id)_newImageFromPasteboard:(id)a0;
- (void)_resetImage;

@end
