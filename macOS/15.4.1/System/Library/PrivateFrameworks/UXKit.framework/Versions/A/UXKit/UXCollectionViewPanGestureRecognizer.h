@class NSEvent;

@interface UXCollectionViewPanGestureRecognizer : NSPanGestureRecognizer

@property (retain, nonatomic) NSEvent *mouseDownEvent;

- (void)dealloc;
- (void)mouseDown:(id)a0;
- (void)uxCancel;

@end
