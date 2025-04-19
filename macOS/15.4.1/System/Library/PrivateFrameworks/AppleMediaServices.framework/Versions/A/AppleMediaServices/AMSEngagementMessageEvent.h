@class NSArray, NSString, NSDictionary;

@interface AMSEngagementMessageEvent : NSObject <AMSEngagementEvent>

@property (copy) NSArray *placementInfo;
@property (copy) NSString *serviceType;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
