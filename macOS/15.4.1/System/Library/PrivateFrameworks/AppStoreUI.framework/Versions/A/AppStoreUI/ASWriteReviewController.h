@class ASWriteReviewWindowController, ASWriteReviewConfiguration;

@interface ASWriteReviewController : NSObject

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (retain, nonatomic) ASWriteReviewWindowController *reviewWindowController;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;

@end
