@class PagePreviewViewController, NSString;

@interface PagePreviewContainerView : NSView <NSAccessibilityGroup>

@property (weak, nonatomic) PagePreviewViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (void)cancelOperation:(id)a0;

@end
