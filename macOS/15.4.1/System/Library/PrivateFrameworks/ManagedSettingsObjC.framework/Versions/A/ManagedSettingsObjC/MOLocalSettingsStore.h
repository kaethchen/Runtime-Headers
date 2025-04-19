@class NSSet, NSString, NSUUID, NSXPCConnection, NSObject;

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (class, readonly, nonatomic) NSSet *stores;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL active;

+ (id)new;
+ (void)deleteStoresWithStoreNames:(id)a0;
+ (void)deleteStoresWithStoreNames:(id)a0 sharedContainer:(id)a1;
+ (void)deleteStoresWithStoreNames:(id)a0 sharedContainer:(id)a1 recordIdentifier:(id)a2;
+ (id)storesForSharedContainer:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)deleteStore;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (void)batchUpdate:(id /* block */)a0;
- (void)clearAllSettings;
- (id)getStoreProperties;
- (id)initWithSharedContainer:(id)a0;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (id)persistableValueForSettingKey:(id)a0;
- (void)removePersistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void)removePersistableValueForSettingKey:(id)a0;
- (void)setPersistableValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)setPersistableValue:(id)a0 forSettingKey:(id)a1;
- (id)settingsReader;
- (id)settingsWriter;
- (void)updateStoreProperties:(id)a0;

@end
