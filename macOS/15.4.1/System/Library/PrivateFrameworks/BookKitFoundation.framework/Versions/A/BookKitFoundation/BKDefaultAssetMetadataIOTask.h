@class NSString;

@interface BKDefaultAssetMetadataIOTask : BKAssetMetadataIOTask <BUFileCopierDelegate>

@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long bytesSoFar;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)didCopyItemToURL:(id)a0 fileSize:(unsigned long long)a1;
- (BOOL)shouldCopyItemToURL:(id)a0;
- (void)_updateProgressWithFileSize:(long long)a0;
- (id)executeWithTargetDirectory:(id)a0 error:(id *)a1;

@end
