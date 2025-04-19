@class VUIDocumentUIConfiguration, NSVisualEffectView;

@interface VUINavigationController : VUIAppNavigationController {
    NSVisualEffectView *visualEffectFillView;
}

@property (retain, nonatomic) VUIDocumentUIConfiguration *configuration;

- (void).cxx_destruct;
- (void)viewDidLayout;

@end
