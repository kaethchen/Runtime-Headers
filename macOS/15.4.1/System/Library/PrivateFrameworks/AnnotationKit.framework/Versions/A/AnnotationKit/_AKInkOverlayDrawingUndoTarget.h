@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject

@property (weak) AKPageController *pageController;

- (void).cxx_destruct;
- (void)performUndo:(id)a0;
- (id)initWithPageController:(id)a0;

@end
