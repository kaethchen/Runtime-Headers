@class NSString, NSDictionary;

@interface ABInstantMessageService : NSObject

@property (copy) NSString *serviceKey;
@property (retain) NSDictionary *actionURITemplates;

+ (id)audioChatURITemplatesByServiceKey;
+ (id)instantMessageServiceWithKey:(id)a0;
+ (id)textChatURITemplatesByServiceKey;
+ (id)videoChatURITemplatesByServiceKey;

- (void)dealloc;
- (id)actionURIForUsername:(id)a0 actionType:(id)a1;
- (id)initWithServiceKey:(id)a0;

@end
