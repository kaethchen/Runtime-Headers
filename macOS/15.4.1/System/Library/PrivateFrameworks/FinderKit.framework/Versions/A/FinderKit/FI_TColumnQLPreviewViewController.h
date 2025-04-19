@interface FI_TColumnQLPreviewViewController : FI_TPropertyQLPreviewViewController

@property (nonatomic, getter=isApplicableToUI) BOOL applicableToUI;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void)dealloc;
- (void)configureView;
- (void)initCommon;
- (BOOL)shouldBeVisible;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)qlPreviewView;

@end
