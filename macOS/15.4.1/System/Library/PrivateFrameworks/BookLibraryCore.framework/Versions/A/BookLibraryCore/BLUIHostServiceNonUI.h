@interface BLUIHostServiceNonUI : NSObject <BLUIHostServiceProtocol>

- (void)handleAuthenticateRequest:(id)a0 withReply:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 withReply:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 withReply:(id /* block */)a1;
- (void)handlePaymentSheetRequest:(id)a0 purchase:(id)a1 withReply:(id /* block */)a2;

@end
