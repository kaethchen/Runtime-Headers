@class NSViewController, NSTimer, IAMMessage, IAMMessageGroup;

@interface IAMPresentingModalMessageContext : NSObject

@property (retain, nonatomic) IAMMessage *message;
@property (retain, nonatomic) IAMMessageGroup *messageGroup;
@property (weak, nonatomic) NSViewController *presentingViewController;
@property (retain, nonatomic) NSTimer *presentationExpirationTimer;
@property (copy, nonatomic) id /* block */ presentationHandler;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messageGroup:(id)a1 presentingViewController:(id)a2 presentationExpirationTimer:(id)a3 presentationHandler:(id /* block */)a4;

@end
