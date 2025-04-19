@class BKAssetMetadataIOTask, NSString, NSURL, BKAssetMetadata;

@interface BKInstallAssetMetadataIOTask : BKAssetMetadataIOTask

@property (retain, nonatomic) BKAssetMetadataIOTask *copyingSubtask;
@property (retain, nonatomic) NSURL *temporaryDirectory;
@property (retain, nonatomic) BKAssetMetadata *assetToUpdate;
@property (copy, nonatomic) NSString *interimFilenameOverride;
@property (nonatomic) BOOL moveOriginalBook;

- (void).cxx_destruct;
- (void)cancel;
- (id)_subtaskTargetDirectoryWithInstalltDirectory:(id)a0 error:(id *)a1;
- (id)executeWithTargetDirectory:(id)a0 error:(id *)a1;
- (id)initWithSourceMetadata:(id)a0 manager:(id)a1 copyingSubtask:(id)a2;

@end
