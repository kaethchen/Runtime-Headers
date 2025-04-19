@class BMFileBackedCounter, NSString, NSMutableDictionary, NSUUID;

@interface CCSetsAccessDaemonDelegate : NSObject <BMAccessDelegate> {
    NSMutableDictionary *_preparedContainers;
    BMFileBackedCounter *_resourceGenerationCounter;
    NSUUID *_localDeviceUUID;
    NSString *_baseSystemPath;
    BOOL _notifySourcesOnReset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)currentSchemaVersion;
- (BOOL)handlesDirectoryCreationForResource:(id)a0 inContainer:(id)a1;
- (BOOL)handlesDirectoryRemovalForResource:(id)a0 inContainer:(id)a1;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1 inContainer:(id)a2;
- (id)setsDirectoryInContainer:(id)a0;
- (BOOL)teardownResource:(id)a0 inContainer:(id)a1;
- (BOOL)_validateCurrentLocalDeviceUUIDsAgainstContainerInfo:(id)a0 container:(id)a1;
- (id)_loadOrCreateContainerInfo:(id)a0 readOnly:(BOOL)a1;
- (id)_resetSetsDirectory:(id)a0;
- (id)_storedLocalIDSIdentifierInContainer:(id)a0;
- (BOOL)_validateCurrentSchemaAgainstContainerInfo:(id)a0 container:(id)a1;
- (BOOL)_validateReadOnlyContainer:(id)a0;
- (id)incrementResourceGenerationCounter;
- (id)initWithBaseSystemPath:(id)a0 notifySourcesOnReset:(BOOL)a1;
- (BOOL)loadOrCreateResourceGenerationCounter;
- (id)localIDSDeviceId;
- (BOOL)prepareContainer:(id)a0;

@end
