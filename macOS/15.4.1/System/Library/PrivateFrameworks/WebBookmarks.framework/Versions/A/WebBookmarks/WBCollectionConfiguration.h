@class NSString, WBSDevice;

@interface WBCollectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) BOOL isReadonly;
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL createIfNeeded;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long maximumTabsPerTabGroup;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) long long storeOwner;
@property (retain, nonatomic) WBSDevice *device;
@property (copy, nonatomic) NSString *identifier;

+ (id)readonlySafariTabCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;
+ (id)debugTabCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)sharedInMemoryTabCollectionConfiguration;
+ (id)sharedInMemoryTabCollectionConfigurationWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2 createIfNeeded:(BOOL)a3;

@end
