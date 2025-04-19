@class ASFAlertPresentationRequest, NSViewController;

@interface ASAlertPresentation : NSObject

@property (readonly, nonatomic) NSViewController *presentingViewController;
@property (readonly, nonatomic) ASFAlertPresentationRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (void)presentWithResultHandler:(id /* block */)a0;

@end
