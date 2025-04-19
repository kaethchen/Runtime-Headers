@interface BKCopyAssetMetadataIOTask : BKAssetMetadataIOTask

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) unsigned long long totalBytes;

- (void)cancel;
- (id)executeWithTargetDirectory:(id)a0 error:(id *)a1;

@end
