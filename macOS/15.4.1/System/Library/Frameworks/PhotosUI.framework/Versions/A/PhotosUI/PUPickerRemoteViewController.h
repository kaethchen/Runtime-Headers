@interface PUPickerRemoteViewController : NSRemoteViewController

+ (void)requestViewControllerForExtension:(id)a0 proposedSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameInScreenCoordsWithoutWindow;

@end
