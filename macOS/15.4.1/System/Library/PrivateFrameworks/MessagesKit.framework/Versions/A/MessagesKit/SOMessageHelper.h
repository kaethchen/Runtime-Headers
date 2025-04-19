@interface SOMessageHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;
+ (void)_openURLWithAction:(id)a0 forAlias:(id)a1;
+ (void)audioChatWithAlias:(id)a0;
+ (id)iMessageURLForAddress:(id)a0;
+ (id)iMessageURLForAddresses:(id)a0;
+ (id)remoteReceiverProtocol;
+ (void)startChatWithABPersonID:(id)a0;
+ (void)videoChatWithAlias:(id)a0;

- (id)newMessageString;
- (id)openMessagesString;
- (void)openShareKit;
- (void)sendMessageText:(id)a0 toRecipient:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)sendMessageText:(id)a0 toRecipients:(id)a1 onService:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)startNewConverstaionInMessages;

@end
