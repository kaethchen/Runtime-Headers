@class NSMutableDictionary;

@interface IMDBackgroundMessagingAPIMessageRegistry : NSObject {
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;
+ (id)keyFromBundleID:(id)a0 recipientHandle:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)dateLastMessageSentFromAppWithBundleID:(id)a0 recipientHandle:(id)a1;
- (void)recordMessageSentFromAppWithBundleID:(id)a0 toRecipientHandle:(id)a1;

@end
