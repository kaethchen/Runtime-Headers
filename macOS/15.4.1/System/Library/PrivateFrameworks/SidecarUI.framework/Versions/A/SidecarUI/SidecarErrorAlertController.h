@interface SidecarErrorAlertController : SidecarAlertController

+ (id)alertControllerWithRequest:(id)a0;

- (void)loadWindow;
- (id)initWithRequest:(id)a0;
- (id)_errorController;
- (BOOL)autoDismissOnFinished;
- (BOOL)showErrorOnFinished;

@end
