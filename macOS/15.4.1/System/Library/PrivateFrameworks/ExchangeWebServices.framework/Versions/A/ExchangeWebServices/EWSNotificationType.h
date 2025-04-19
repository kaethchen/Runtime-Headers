@class NSString, NSArray;

@interface EWSNotificationType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *SubscriptionId;
@property (copy, nonatomic) NSString *PreviousWatermark;
@property (nonatomic) BOOL MoreEvents;
@property (copy, nonatomic) NSArray *Events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
