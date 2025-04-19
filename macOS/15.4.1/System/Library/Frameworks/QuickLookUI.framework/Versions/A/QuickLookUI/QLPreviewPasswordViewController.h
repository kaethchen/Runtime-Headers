@class NSTextField, NSView, NSString, CALayer, NSDictionary, QLPreviewDocument, NSImageView, NSResponder, QLDisplayBundleViewController;

@interface QLPreviewPasswordViewController : NSViewController <QLDisplayable> {
    BOOL _hasEnteredWrongPassword;
}

@property BOOL isHidden;
@property (weak) NSView *containerView;
@property (weak) NSTextField *passwordField;
@property (weak) NSTextField *descriptionField;
@property (weak) NSImageView *imageView;
@property (weak) NSImageView *smallAlternateImageView;
@property (weak) QLPreviewDocument *document;
@property BOOL hasEnteredWrongPassword;
@property (readonly) NSView *quickLookView;
@property (readonly) CALayer *quickLookLayer;
@property (readonly) QLDisplayBundleViewController *quickLookViewController;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } quickLookFrame;
@property (readonly) NSResponder *responder;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderFrame;
@property (readonly) NSDictionary *sizingConstraints;
@property unsigned long long currentPage;
@property (readonly) id accessibilityFocusedUIElement;
@property int inputFocusType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)didShow;
- (void)willHide;
- (void)validatePassword:(id)a0;
- (void)_updateWithSizeVariantForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)giveInputFocus;
- (BOOL)hasContentAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
