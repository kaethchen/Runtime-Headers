@interface TUIInputAnalytics : NSObject

+ (void)sendGenmojiCreationSignal:(id)a0 payload:(id)a1;
+ (id)getIAChannelGenmojiCreation;
+ (void)didHandleSmartReplyAnalyticsEventOfType:(long long)a0 withBundleId:(id)a1 withInputContextHistoryRequestId:(id)a2 withMsgOrMailThreadId:(id)a3 withSmartReplyResponse:(id)a4 withConversationType:(long long)a5;
+ (id)getIASignalGenmojiCreationEmojiKeyPlaneSwitched;
+ (id)getIASignalGenmojiCreationEmojiSearchDismissed;
+ (id)getIASignalGenmojiCreationEmojiSearchInvoked;
+ (id)getIASignalGenmojiCreationGenmojiButtonPressed;

@end
