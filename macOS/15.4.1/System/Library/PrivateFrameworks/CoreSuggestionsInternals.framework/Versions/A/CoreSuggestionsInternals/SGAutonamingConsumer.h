@class NSString;

@interface SGAutonamingConsumer : NSObject <HVMessagesConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (int)_sendEvents:(id)a0;
- (id)consumeMessagesContentWithContext:(id)a0;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;

@end
