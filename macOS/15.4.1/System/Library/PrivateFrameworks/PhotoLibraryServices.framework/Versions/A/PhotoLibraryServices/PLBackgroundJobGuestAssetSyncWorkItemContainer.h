@class NSManagedObjectID;

@interface PLBackgroundJobGuestAssetSyncWorkItemContainer : NSObject <NSCopying>

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long type;

+ (id)initialSyncWorkItem;
+ (id)libraryOrPreferencesChangedWorkItem;
+ (id)persistedJobWorkItemWithObjectID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
