@class NSBox, QFilterOutlineView, NSScrollView, NSMenu, NSButton, NSMenuItem;

@interface QFilterView : NSView {
    NSButton *FilterAddButton;
    NSButton *FilterApplyButton;
    NSBox *FilterControlBox;
    NSButton *FilterHelpButton;
    QFilterOutlineView *FilterOutlineView;
    NSButton *FilterRemoveButton;
    NSScrollView *FilterScrollOutlineView;
    NSMenu *FilterActionMenu;
    NSMenuItem *LockUnlockMenuItem;
    NSMenuItem *ColorSubmenu;
    NSMenuItem *AssignProfileMenuItem;
    NSMenuItem *DefaultProfileMenuItem;
    NSMenuItem *RenderIntentMenuItem;
    NSMenuItem *IntermediateTransformMenuItem;
    NSMenuItem *ConvertToProfileMenuItem;
    NSMenuItem *ImageSubmenu;
    NSMenuItem *ColorImageSamplingMenuItem;
    NSMenuItem *GrayImageSamplingMenuItem;
    NSMenuItem *ImageCompressionMenuItem;
    NSMenuItem *ImageConvolutionMenuItem;
    NSMenuItem *PDFSubmenu;
    NSMenuItem *PDFPoliciesMenuItem;
    NSMenuItem *PDFX3MenuItem;
    NSMenuItem *DomainItem;
    NSMenuItem *CommentItem;
}

+ (void)newWithOwner:(id)a0;

- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (id)ColorImageSamplingMenuItem;
- (id)CommentItem;
- (id)DefaultProfileMenuItem;
- (id)FilterActionMenu;
- (id)FilterRemoveButton;
- (id)GrayImageSamplingMenuItem;
- (id)ImageConvolutionMenuItem;
- (id)IntermediateTransformMenuItem;
- (id)PDFPoliciesMenuItem;
- (id)PDFX3MenuItem;
- (id)AssignProfileMenuItem;
- (id)ColorSubmenu;
- (id)ConvertToProfileMenuItem;
- (id)DomainItem;
- (id)FilterApplyButton;
- (id)FilterHelpButton;
- (id)ImageCompressionMenuItem;
- (id)ImageSubmenu;
- (id)LockUnlockMenuItem;
- (id)PDFSubmenu;
- (id)RenderIntentMenuItem;
- (void)initWithApplyButton:(BOOL)a0;
- (id)outlineview;

@end
