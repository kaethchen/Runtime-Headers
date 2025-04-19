@class QFilter, NSMenuItem;

@interface QFilterActionMenu : NSMenu {
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
    QFilter *filter;
}

- (id)filter;
- (void)setFilter:(id)a0;

@end
