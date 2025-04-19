@class NSString;

@interface MSUMigrationHelper : NSObject {
    _Atomic BOOL _copyInProgress;
    _Atomic unsigned long long _totalCopySize;
    unsigned long long _copiedSoFar;
    int _currentOperation;
    int _previousProgress;
}

@property (readonly) NSString *systemVolumeMountpoint;
@property (readonly) NSString *dataVolumeMountpoint;
@property (readonly) NSString *updatePartitionMountpoint;

- (void)dealloc;
- (BOOL)createFirmlinks;
- (BOOL)_dataVolumeIsAccessible;
- (BOOL)_ensureDirectoryExistsAtPath:(id)a0 error:(id *)a1;
- (BOOL)_updatePartitionIsAccessible;
- (BOOL)_writeCookieFileAtPath:(id)a0;
- (BOOL)_writeDictionary:(id)a0 atPath:(id)a1 error:(id *)a2;
- (id)bootTimeInstallPackages;
- (id)dataTemplatePath;
- (id)initWithSystemVolume:(id)a0 dataVolume:(id)a1 updatePartition:(id)a2;
- (id)initWithSystemVolume:(id)a0 dataVolume:(id)a1 updatePartition:(id)a2 progressBlock:(id /* block */)a3;
- (BOOL)populateAppleInternalDiagsVolume;
- (BOOL)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(BOOL)a1 nonTemplateMigration:(BOOL)a2;
- (BOOL)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(BOOL)a1 nonTemplateMigration:(BOOL)a2 seedingProgram:(id)a3;
- (BOOL)preparePrebootVolumeForMigration:(id)a0 fullReplacement:(BOOL)a1 nonTemplateMigration:(BOOL)a2 seedingProgram:(id)a3 didRequestEraseInstall:(BOOL)a4 volumeUUIDToErase:(id)a5;
- (BOOL)queueAppleInternalPackagesForBootTimeInstall;
- (BOOL)queuePackagesForBootTimeInstall:(id)a0;
- (id)systemVolumeContainter;

@end
