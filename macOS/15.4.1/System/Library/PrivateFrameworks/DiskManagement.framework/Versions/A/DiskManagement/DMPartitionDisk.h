@interface DMPartitionDisk : NSObject {
    id _instPriv;
}

- (void)dealloc;
- (id)init;
- (id)initWithManager:(id)a0;
- (int)addPartitionFollowingPartition:(struct __DADisk { } *)a0 newFilesystemOrContentNoFormat:(id)a1 newName:(id)a2 newSize:(id)a3 options:(id)a4;
- (int)adjustMapToFitGrownWholeDisk:(struct __DADisk { } *)a0;
- (int)changeFilesystemSizeOnDisk:(struct __DADisk { } *)a0 toSize:(id)a1 fitPartition:(BOOL)a2;
- (int)createExternalJournalOnDisk:(struct __DADisk { } *)a0 forDisk:(struct __DADisk { } *)a1;
- (int)defaultSchemeTypeForSingleFilesystem:(id)a0 forWholeDisk:(struct __DADisk { } *)a1;
- (int)getFreespaceFollowingPartition:(struct __DADisk { } *)a0 skipBooter:(BOOL)a1 gapSize:(id *)a2 reserveSize:(id *)a3 usableSize:(id *)a4;
- (int)getPartitionMapSizeForWholeDisk:(struct __DADisk { } *)a0 totalSize:(id *)a1 usableSize:(id *)a2 overheadSize:(id *)a3;
- (id)getPartitionStartLocationForDisk:(struct __DADisk { } *)a0;
- (int)getResizeLimits:(struct __DADisk { } *)a0 returningInfo:(id *)a1;
- (int)getResizeLimitsForCoreStorageLogicalVolume:(struct __DADisk { } *)a0 forPhysicalVolume:(struct __DADisk { } *)a1 returningInfo:(id *)a2;
- (int)getResizeLimitsForCoreStorageLogicalVolume:(struct __DADisk { } *)a0 returningInfo:(id *)a1;
- (int)mergePartitions:(id)a0 filesystem:(id)a1 name:(id)a2 erase:(BOOL)a3;
- (int)mergePartitions:(id)a0 filesystem:(id)a1 name:(id)a2 erase:(BOOL)a3 options:(id)a4;
- (int)partitionDisk:(struct __DADisk { } *)a0 withMap:(id)a1 formatVolumes:(BOOL)a2;
- (int)partitionDisk:(struct __DADisk { } *)a0 withMap:(id)a1 formatVolumes:(BOOL)a2 options:(id)a3;
- (int)removePartition:(struct __DADisk { } *)a0 wipe:(BOOL)a1 options:(id)a2;
- (int)resizePartition:(struct __DADisk { } *)a0 toBytes:(id)a1 withNewMapEntries:(id)a2;
- (int)resizeVolume:(struct __DADisk { } *)a0 toBytes:(id)a1 withNewMapEntries:(id)a2;
- (int)resizeVolume:(struct __DADisk { } *)a0 toBytes:(id)a1 withNewMapEntries:(id)a2 options:(id)a3;
- (int)setLabelForPartition:(struct __DADisk { } *)a0 label:(id)a1 options:(id)a2;
- (int)splitPartition:(struct __DADisk { } *)a0 intoNewPartitions:(id)a1;
- (int)touchPartitionMapForWholeDisk:(struct __DADisk { } *)a0;

@end
