@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cachedCount;
- (void)cleanUpAddressBookCache_sync;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)a0;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;

@end
