@class NSString;

@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>

@property (readonly, nonatomic) BOOL deviceHasMultipleSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)bestSenderIdentityForChatWithHandleIDs:(id)a0;
- (id)handleIDForSenderIdentity:(id)a0;
- (id)simIDForSenderIdentity:(id)a0;

@end
