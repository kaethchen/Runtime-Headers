@class NSString, NSUUID, NSMutableDictionary, NSMutableSet, NSObject, NSXPCConnection;

@interface MOBatchSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (retain, nonatomic) NSMutableDictionary *updatedSettings;
@property (retain, nonatomic) NSMutableSet *removedSettings;
@property (retain, nonatomic) NSMutableDictionary *updatedProperties;
@property (readonly, nonatomic) NSObject *settingsLock;
@property (nonatomic) BOOL fullReplacement;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL active;

+ (id)storeWithName:(id)a0 sharedContainer:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)commitChanges;
- (void)deleteStore;
- (id)getCurrentSettings;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (void)clearAllSettings;
- (id)getCurrentStoreProperties;
- (id)persistableValueForSetting:(id)a0 inGroup:(id)a1;
- (id)persistableValueForSettingKey:(id)a0;
- (void)removePersistableValueForSetting:(id)a0 inGroup:(id)a1;
- (void)removePersistableValueForSettingKey:(id)a0;
- (void)setPersistableValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)setPersistableValue:(id)a0 forSettingKey:(id)a1;
- (id)settingsReader;
- (id)settingsWriter;

@end
