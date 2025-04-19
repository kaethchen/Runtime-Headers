@class EKUIGadgetContainer, EKViewController;

@interface EKViewScrollView : NSScrollView

@property (weak) EKUIGadgetContainer *container;
@property (weak) EKViewController *viewController;
@property BOOL isEnabled;
@property BOOL shouldScrollToTop;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isAccessibilityElement;
- (void)scrollWheel:(id)a0;
- (void)scrollToTop;
- (id)initWithDocumentView:(id)a0;
- (void)resolutionDidChange:(id)a0;
- (void)updateScrollState;

@end
