@class ASWriteReviewRateView, ASWriteReviewConfiguration;

@interface ASRateViewController : NSViewController

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (readonly, nonatomic) ASWriteReviewRateView *rateView;
@property (nonatomic) BOOL hasActiveRequest;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (struct CGSize { double x0; double x1; })preferredSizeForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)loadView;
- (void)updateControls;
- (BOOL)_overrideSandboxForReviewPrompt;
- (void)configureDialogView:(id)a0;

@end
