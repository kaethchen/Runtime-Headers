@class IAMMessageCoordinator, NSString, NSDictionary, IAMWebMessagePresentationCoordinator, IAMPresentingModalMessageContext;

@interface IAMModalTarget : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMMessageGroupInternalDelegate, IAMMessageTarget> {
    IAMMessageCoordinator *_messageCoordinator;
    IAMWebMessagePresentationCoordinator *_webMessagePresentationCoordinator;
}

@property (retain, nonatomic) IAMPresentingModalMessageContext *presentingMessageContext;
@property (readonly, nonatomic) NSString *targetIdentifier;
@property (copy, nonatomic) NSDictionary *messageGroupsByGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;

+ (void)initialize;
+ (BOOL)isAnyModalTargetPresentingMessage;

- (void)dealloc;
- (void).cxx_destruct;
- (void)windowDidEndSheet:(id)a0;
- (void)_presentMessage:(id)a0 messageEntry:(id)a1 fromViewController:(id)a2 withCompletion:(id /* block */)a3;
- (id)_applicationViewControllerForModalPresentation;
- (void)_handlePresentation:(id)a0;
- (void)_handlePresentingMessageContextDidExpireBeforePresentation;
- (void)_presentWebModalMessageEntry:(id)a0 withCompletion:(id /* block */)a1;
- (void)_reportMessageDidAppearWithIdentifier:(id)a0;
- (void)_reportMessageDidDisappearWithIdentifier:(id)a0;
- (id)initWithMessageCoordinator:(id)a0 targetIdentifier:(id)a1;
- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 forTarget:(id)a2;
- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 fromMessageEntry:(id)a2 forTarget:(id)a3 withCompletion:(id /* block */)a4;
- (void)messageGroup:(id)a0 didReportModalMessagePresentationFailedWithIdentifier:(id)a1;
- (void)messageGroup:(id)a0 didReportModalMessageWasDismissedWithIdentifier:(id)a1;
- (void)messageGroup:(id)a0 didReportModalMessageWasPresentedWithIdentifier:(id)a1;
- (void)messageGroup:(id)a0 didReportModalMessageWithIdentifier:(id)a1 actionWasPerformedWithIdentifier:(id)a2;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)a0;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)a0;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)a0;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)a0;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)a0 event:(id)a1;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)a0 actionConfiguration:(id)a1;

@end
