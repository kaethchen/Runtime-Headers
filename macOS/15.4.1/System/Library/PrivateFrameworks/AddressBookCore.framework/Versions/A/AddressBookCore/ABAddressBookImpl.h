@class ABCustomPropertyCache, ABAddressBookNotificationInfo, NSArray, ABAddressBookChangesNotifier, ABPersistentStoreCoordinatorCache;

@interface ABAddressBookImpl : NSObject

@property (nonatomic) BOOL createdOnMainThread;
@property BOOL deactivated;
@property (nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic) BOOL registeredForChangeNotifications;
@property (nonatomic, getter=isDirectoryResults) BOOL directoryResults;
@property (nonatomic) BOOL overridesReadOnly;
@property (nonatomic) BOOL hasUnfilteredAccess;
@property (readonly, retain) ABCustomPropertyCache *customPropertyCache;
@property (retain) ABAddressBookNotificationInfo *preparedNotificationInfo;
@property (retain) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache;
@property (copy) NSArray *allocationBacktrace;
@property (retain) ABAddressBookChangesNotifier *changesNotifier;

- (void)dealloc;
- (id)init;

@end
