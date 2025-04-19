@interface ShroudedPod : DiskPod {
    unsigned int _numberBreadcrumbBlocks;
}

+ (int)firmwareTypeForDownloadType:(int)a0;

- (void)dealloc;
- (int)SCSIOpen:(int)a0 length:(unsigned int)a1;
- (void)updateFirmware:(id)a0;
- (int)SCSIClose;
- (int)SCSIDownload:(id)a0 type:(int)a1 startPercent:(double)a2 endPercent:(double)a3;
- (int)SCSIReset;
- (id)createNewBreadCrumb:(BOOL)a0 firmware:(id)a1;
- (BOOL)firmwarePartitionNeedsResizing;
- (id)fullBSDPathForFormat:(int)a0;
- (int)getBreadcrumbSize:(unsigned int *)a0;
- (int)getFirmwareSize:(unsigned long long *)a0;
- (void)indicateSelection;
- (BOOL)isQ14ConnectedOverUSB;
- (int)partitionAndFormat;
- (int)readBreadcrumbData:(id *)a0 fromOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)releaseSCSIDeviceInterface;
- (int)removeSpeakableFiles;
- (void)restoreFirmware:(id)a0;
- (int)setFirmwareSize:(unsigned long long)a0;
- (unsigned long long)shroudedSize;
- (unsigned long long)sizeForNewFirmwarePartition;
- (int)sliceNumberOfDataPartitionForFormat:(int)a0;
- (unsigned int)spaceForBreadcrumbs;
- (BOOL)supportsBreadCrumbs;
- (BOOL)supportsMultipleDiskFormats;
- (void)updateFirmware:(id)a0 andFormat:(BOOL)a1;
- (int)updateFirmwareType:(int)a0 withFirmware:(id)a1 startPercent:(double)a2 endPercent:(double)a3;
- (int)writeBreadcrumbData:(id)a0 atOffset:(unsigned long long)a1;

@end
