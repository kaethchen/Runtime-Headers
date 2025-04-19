@class NSString, NSAttributedString, INSendMessageIntent;

@interface UNNotificationAttributedMessageContext : NSObject <UNNotificationContentProviding>

@property (copy) INSendMessageIntent *sendMessageIntent;
@property (copy) NSAttributedString *attributedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithSendMessageIntent:(id)a0 attributedContent:(id)a1;

- (void).cxx_destruct;
- (id)_initWithSendMessageIntent:(id)a0 attributedContent:(id)a1;

@end
