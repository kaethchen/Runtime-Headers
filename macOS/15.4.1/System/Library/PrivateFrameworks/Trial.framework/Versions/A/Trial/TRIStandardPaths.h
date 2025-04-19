@class NSString, TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {
    unsigned int _schemaVersion;
    TRIAppContainer *_container;
    BOOL _isClient;
    struct atomic_flag { _Atomic BOOL _Value; } _loggedRootDir;
    NSString *_containerPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _homeDirectoryLock;
}

+ (unsigned int)currentSchemaVersion;
+ (unsigned int)legacySchemaVersion;
+ (unsigned int)resetStorageRequestSchemaVersion;
+ (id)resolveHardCodedPath:(id)a0;
+ (id)schemaVersionFile;
+ (id)sharedSystemPaths;

- (id)init;
- (void).cxx_destruct;
- (id)container;
- (BOOL)validateWithError:(id *)a0;
- (id)assetStore;
- (id)subjectDataFile;
- (id)allowedLowLevelDefaultLevelsDir;
- (id)_pathErrorWithDescription:(id)a0;
- (id)_realHomeDirectory;
- (id)_trialSystemRootDir;
- (id)_trialSystemRootDirWithError:(id *)a0;
- (id)_versionSpecificStorageDir;
- (id)_versionSpecificStorageDirUsingGlobal:(BOOL)a0;
- (id)_versionSpecificSystemStorageDir;
- (id)activeLowLevelFactorsFile;
- (id)assetStoreUsingGlobal:(BOOL)a0;
- (id)containerDir;
- (id)databaseDir;
- (id)decryptionKeyDirForAppleInternal:(BOOL)a0;
- (id)deviceIdentifierFile;
- (id)experimentsDir;
- (id)externalParametersFile;
- (id)initWithCurrentSchemaVersion;
- (id)initWithSchemaVersion:(unsigned int)a0;
- (id)initWithSchemaVersion:(unsigned int)a0 container:(id)a1 asClientProcess:(BOOL)a2;
- (id)localTempDir;
- (id)logDir;
- (id)namespaceDescriptorsBMLTDir;
- (id)namespaceDescriptorsDefaultDir;
- (id)namespaceDescriptorsDevOverrideDir;
- (id)namespaceDescriptorsDir;
- (id)namespaceDescriptorsDirUsingGlobal:(BOOL)a0;
- (id)namespaceDescriptorsExperimentDir;
- (id)namespaceDescriptorsPathForLayer:(unsigned long long)a0;
- (id)namespaceDescriptorsRolloutDir;
- (id)pathsForContainer:(id)a0 asClientProcess:(BOOL)a1;
- (id)systemDataFile;
- (id)treatmentsDir;
- (id)treatmentsDirUsingGlobal:(BOOL)a0;
- (id)trialRootDir;
- (id)trialRootDirUsingGlobal:(BOOL)a0;
- (id)trialRootDirWithError:(id *)a0;
- (id)trialVolume;
- (id)volumeForDirectory:(id)a0;

@end
