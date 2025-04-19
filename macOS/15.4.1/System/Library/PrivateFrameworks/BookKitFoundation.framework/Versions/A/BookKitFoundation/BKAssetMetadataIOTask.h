@class BKAssetMetadata, BKAssetMetadataFileManager, NSString;

@interface BKAssetMetadataIOTask : NSObject

@property (retain, nonatomic) BKAssetMetadata *sourceMetadata;
@property (retain, nonatomic) BKAssetMetadataFileManager *manager;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) NSString *targetFilenameOverride;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSourceMetadata:(id)a0 manager:(id)a1;
- (id)executeWithTargetDirectory:(id)a0 error:(id *)a1;

@end
