@class NSString, NSMutableSet;

@interface PRSPurchaseHistoryManager : NSObject <CKDAAPPurchaseHistoryObserver>

@property (retain) NSMutableSet *setOfPurchasedAdamIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSharedPurchaseHistoryManager;

@end
