@class SOElementClickFlashOverlayBackgroundView;

@interface SOElementClickFlashOverlayController : NSWindowController {
    SOElementClickFlashOverlayBackgroundView *_backgroundView;
    id /* block */ _completionHandler;
}

+ (id)sharedElementClickFlashOverlayController;

- (void)dealloc;
- (void)hideOverlay;
- (void)flashOverlayForElementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;

@end
