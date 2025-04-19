@class NSVB_ViewServiceFencingController;

@interface NSVB_ViewServiceFencingControlProxy : NSVB_QueueingProxy {
    NSVB_ViewServiceFencingController *_fencingController;
}

+ (id)proxyWithTarget:(id)a0 connectionClient:(id)a1 fencingController:(id)a2 exportedProtocol:(id)a3;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)__endFencingMessagesForSendRight:(id)a0 nsWindowDeferralSendRight:(id)a1;
- (void)__beginFencingMessagesWithSendRight:(id)a0 withReply:(id /* block */)a1;
- (void)__forgetFencingMessages;

@end
