@class NSString, NSSet, WBSRecentsStore;
@protocol WBSCloudTabDeviceProvider;

@interface WBSRecentCloudTabsProvider : NSObject <WBSCloudTabDeviceObserving, WBSRecentsProvider>

@property (retain, nonatomic) id<WBSCloudTabDeviceProvider> cloudTabDeviceProvider;
@property (copy, nonatomic) NSString *activeProfileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) WBSRecentsStore *recentsStore;
@property (readonly, nonatomic) NSSet *recentItems;

- (void).cxx_destruct;
- (void)cloudTabDeviceProvider:(id)a0 didUpdateCloudTabsInProfileWithIdentifier:(id)a1;
- (id)initWithCloudTabDeviceProvider:(id)a0;

@end
