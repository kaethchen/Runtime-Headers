@class NSArray, WBSSiteMetadataManager, NSMapTable, NSMutableArray;

@interface WBSRecentsStore : NSObject {
    NSMutableArray *_providers;
    NSMutableArray *_recentItemsByProviderIndex;
    NSMapTable *_recentItemsToMetadataTokens;
}

@property (readonly, nonatomic) NSArray *displayableRecentItems;
@property (readonly, nonatomic) NSArray *availableDevices;
@property (readonly, weak, nonatomic) WBSSiteMetadataManager *siteMetadataManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)registerProvider:(id)a0;
- (void)fetchMetadata;
- (id)initWithSiteMetadataManager:(id)a0;
- (void)_fetchPendingMetadataAndNotifyRecentItemChanges;
- (void)_notifyRecentItemsDidReceiveMetadata;
- (void)_rebuildAllRecentItemsAndDevices;
- (void)ingestRecentItemsFromProvider:(id)a0;
- (id)providerForItem:(id)a0;
- (void)updateRecentItem:(id)a0 withLinkMetadata:(id)a1;

@end
