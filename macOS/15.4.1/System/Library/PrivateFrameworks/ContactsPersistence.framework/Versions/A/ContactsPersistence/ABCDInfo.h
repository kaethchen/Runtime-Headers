@class NSString, CNCDContainer;

@interface ABCDInfo : ABCDRecord

@property (retain, nonatomic) NSString *meUniqueId;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) CNCDContainer *container;

+ (BOOL)_isPublicRecord;
+ (id)_table;
+ (id)abEntityName;
+ (id)nts_createInfoInManagedObjectContext:(id)a0 inPersistentStoreAtURL:(id)a1;
+ (id)nts_firstPersistentStoreForUrls:(id)a0 inCoordinator:(id)a1;
+ (id)nts_persistentStoreForUrl:(id)a0 inCoordinator:(id)a1;

- (id)remoteLocations;
- (id)fetchedContainerInManagedObjectContext:(id)a0 store:(id)a1;
- (id)parentGroups;
- (id)readSharingACL;
- (id)readWriteSharingACL;
- (void)setReadSharingACL:(id)a0;
- (void)setReadWriteSharingACL:(id)a0;
- (void)setRemoteLocations:(id)a0;

@end
