@class MCInvocationQueue, NSArray, NSString, NSOperationQueue, NSMutableSet, NSMutableDictionary, NSCache;

@interface MFAddressManager : NSObject <MCActivityTarget> {
    NSMutableSet *_emailsAwaitingImage;
    NSMutableSet *_emailsWithoutImage;
    NSMutableDictionary *_recordsCache;
    NSMutableSet *_addressesWithNoRecords;
    BOOL _needToTrimRecordCaches;
}

@property (readonly, nonatomic) NSCache *imageCache;
@property (readonly, nonatomic) MCInvocationQueue *imageLoadingQueue;
@property (readonly, nonatomic) NSOperationQueue *imageCreationQueue;
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)addressManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)recordForUniqueId:(id)a0;
- (void)addAddresses:(id)a0;
- (void)_addAddresses:(id)a0;
- (void)_addressBookDidChange:(id)a0;
- (id)_addressBookRecordForEmail:(id)a0;
- (id)_addressBookRecordsForFirstName:(id)a0 lastName:(id)a1;
- (void)_clearCachedImagesForRemovedRecords:(id)a0;
- (id)_fullAddressesForRecords:(id)a0;
- (void)_invalidateChangedRecords:(id)a0;
- (void)_invalidateInsertedRecords:(id)a0;
- (void)_loadAddressBookSynchronously;
- (void)_trimRecordCaches;
- (void)_trimRecordCachesAfterDelay;
- (void)addRecentAddresses:(id)a0 sendingAddress:(id)a1;
- (id)addRecentToAddressBook:(id)a0;
- (id)addressBookPersonForEmail:(id)a0;
- (id)bestRecordMatchingFormattedAddress:(id)a0;
- (void)loadAddressBookAsynchronously;
- (void)removeRecentAddresses:(id)a0;
- (void)removeRecentRecord:(id)a0;
- (void)removeRecordFromAddressBook:(id)a0 forRecent:(id)a1;

@end
