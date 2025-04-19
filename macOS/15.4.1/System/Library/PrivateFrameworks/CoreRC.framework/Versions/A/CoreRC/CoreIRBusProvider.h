@class IRInterface, NSSet, NSString, CoreIRDeviceProvider;

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {
    CoreIRDeviceProvider *_localDevice;
    unsigned long long _stateHandler;
}

@property (class, readonly, nonatomic) NSSet *deviceDictClasses;

@property (readonly, retain, nonatomic) IRInterface *interface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (Class)classForCoder;
- (void)setManager:(id)a0;
- (id)initWithInterface:(id)a0;
- (id)localDevice;
- (void)didAddDevice:(id)a0;
- (void)didRemoveDevice:(id)a0;
- (BOOL)recreateDevices;
- (id)_addAppleRemoteWithDeviceUID:(unsigned char)a0;
- (id)_addDeviceWithType:(unsigned long long)a0 matching:(id)a1 transportProperties:(id)a2 error:(id *)a3;
- (id)_findAppleRemoteWithUID:(unsigned char)a0;
- (void)_recreatePairedDeviceFromDefaults:(id)a0 key:(id)a1;
- (void)_removeMappingForCommand:(unsigned long long)a0 from:(id)a1;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 error:(id *)a2;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 learningSession:(id)a2 error:(id *)a3;
- (BOOL)addMappingsFromRemote:(id)a0 toLearningSession:(id)a1;
- (id)appleIRDeviceWithUID:(unsigned char)a0 create:(BOOL)a1;
- (id)copyDevicePrefs:(id *)a0;
- (id)copyPrefsPropertyForUUID:(id)a0 UUIDKey:(id)a1 key:(id)a2;
- (BOOL)deleteDevicePrefsWithUUID:(id)a0 UUIDKey:(id)a1;
- (id)getExistingDeviceWithType:(unsigned long long)a0 matching:(id)a1;
- (void)interface:(id)a0 receivedCommand:(id)a1;
- (BOOL)mergePersistentMappingsFromSession:(id)a0 ofDevice:(id)a1;
- (void)migrateOldRemotes;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (BOOL)saveDevicePrefsWithDict:(id)a0 error:(id *)a1;
- (BOOL)setPairedAppleRemote:(id)a0 error:(id *)a1;
- (BOOL)setPrefsPropertyForUUID:(id)a0 UUIDKey:(id)a1 object:(id)a2 key:(id)a3;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)thirdPartyRemotes;
- (void)updateAllowHibernation;
- (void)updateLearnedProtocols;
- (BOOL)updatePersistentValue:(id)a0 forProperty:(id)a1 ofDevice:(id)a2;
- (void)willAddToManager:(id)a0;
- (void)willRemoveDevice:(id)a0;

@end
