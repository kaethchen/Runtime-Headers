@class CheckPoint, NSString, SysInfo, NSTimer, PUDevice, VolumeInfoObject, NSDate;

@interface DiskPod : Pod {
    unsigned int _service;
    PUDevice *_device;
    NSString *_name;
    unsigned short _blockSize;
    CheckPoint *_checkPoint;
    VolumeInfoObject *_volInfo;
    SysInfo *_sysInfo;
    int _diskFormat;
    NSString *_bsdName;
    unsigned int _updaterFamilyID;
    unsigned short _product;
    struct FSVolumeInfo { struct UTCDateTime { unsigned short highSeconds; unsigned int lowSeconds; unsigned short fraction; } createDate; struct UTCDateTime { unsigned short highSeconds; unsigned int lowSeconds; unsigned short fraction; } modifyDate; struct UTCDateTime { unsigned short highSeconds; unsigned int lowSeconds; unsigned short fraction; } backupDate; struct UTCDateTime { unsigned short highSeconds; unsigned int lowSeconds; unsigned short fraction; } checkedDate; unsigned int fileCount; unsigned int folderCount; unsigned long long totalBytes; unsigned long long freeBytes; unsigned int blockSize; unsigned int totalBlocks; unsigned int freeBlocks; unsigned int nextAllocation; unsigned int rsrcClumpSize; unsigned int dataClumpSize; unsigned int nextCatalogID; unsigned char finderInfo[32]; unsigned short flags; unsigned short filesystemID; unsigned short signature; unsigned short driveNumber; int driverRefNum; } _fsVolInfo;
    BOOL _canFlash;
    NSTimer *_reinitTimer;
    NSDate *_reinitTimerStarted;
    struct SCSITaskDeviceInterface **_scsiDeviceInterface;
    struct IOCFPlugInInterfaceStruct **_plugInInterface;
    BOOL _wantsToMount;
}

+ (id)firewireGUIDforService:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (id)device;
- (unsigned int)service;
- (id)serialNumber;
- (unsigned short)productID;
- (id)firmwareVersion;
- (id)initWithService:(unsigned int)a0;
- (unsigned short)blockSize;
- (int)unmount;
- (int)mount;
- (id)bsdName;
- (short)revisionLevel;
- (int)SCSICommandWIthCommandDescriptorBlock:(unsigned char[16])a0 buffer:(char *)a1 length:(unsigned int)a2;
- (void)copyComponents:(id)a0;
- (BOOL)mounted;
- (id)podName;
- (void)updateFirmware:(id)a0;
- (int)ensureUnitReady;
- (unsigned long long)sizeForService:(unsigned int)a0;
- (unsigned int)updaterFamilyID;
- (unsigned short)blockSizeForService:(unsigned int)a0;
- (unsigned int)buildIDFromRevision;
- (id)devNameForService:(unsigned int)a0;
- (void)disableReinitTimer;
- (int)diskFormat;
- (int)ensureDeviceCanBeOpened;
- (BOOL)ensurePodMountedEnough;
- (id)firewireGUID;
- (id)fullBSDPathForFormat:(int)a0;
- (id)getErrorCode:(int *)a0;
- (void)getFSVolInfo;
- (double)getPercentageFilled;
- (int)getSCSIDeviceInterface;
- (unsigned short)hardwareMajorRevision;
- (unsigned short)hardwareMinorRevision;
- (BOOL)hasBangFolder;
- (void)hasBeenUnmounted;
- (unsigned short)highestSupportedBreadcrumbVersion;
- (void)initAgain;
- (BOOL)initDevice;
- (BOOL)initVolInfo;
- (BOOL)isLowSpeedUSB;
- (BOOL)isQ14ConnectedOverUSB;
- (int)manualFormat:(int)a0;
- (BOOL)mountedEnoughForUpdate;
- (BOOL)needToDisconnectAfterUpdate;
- (BOOL)needToPlugIntoExternalPowerAfterUpdate;
- (unsigned int)podFamilyID;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)readSysInfo;
- (int)restoreDiskFormat;
- (void)restoreFirmware:(id)a0;
- (void)setVolumeInfoObject:(id)a0;
- (void)setupTimerForReinit;
- (unsigned long long)sizeForNewFirmwarePartition;
- (int)sliceNumberOfDataPartitionForFormat:(int)a0;
- (unsigned int)spaceForBreadcrumbs;
- (BOOL)supportsBreadCrumbs;
- (BOOL)supportsMultipleDiskFormats;
- (int)testUnitReady;
- (void)updateFirmware:(id)a0 andFormat:(BOOL)a1;
- (unsigned int)userVisibleFirmwareVersion;
- (id)userVisibleFirmwareVersionString;
- (BOOL)waitForDevice:(double)a0;
- (BOOL)waitForMount:(double)a0;
- (BOOL)wantsToMount;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;
- (void)writeFirmware:(id)a0;

@end
