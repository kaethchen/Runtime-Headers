@class VFXRendererOptionsPanelController;

@interface VFXRendererOptionsPanel : NSPanel {
    VFXRendererOptionsPanelController *_controller;
}

+ (id)rendererOptionsPanelForView:(id)a0;

- (void).cxx_destruct;
- (void)close;
- (void)open;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)controller;
- (void)setController:(id)a0;

@end
