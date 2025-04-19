@interface CloudKit.CloudAssetsAssetStreamHandle : NSObject {
    void /* unknown type, empty encoding */ assetStreamHandle;
}

@property (nonatomic, readonly) long long size;

+ (id)makeAssetStreamHandleWithPartition:(id)a0 owner:(id)a1 accessToken:(id)a2 requestorID:(id)a3 signature:(id)a4 referenceSignature:(id)a5 size:(long long)a6 assetKey:(id)a7 filenameExtension:(id)a8 applicationID:(id)a9 error:(id *)a10;

- (id)init;
- (void).cxx_destruct;
- (id)initFrom:(id)a0 error:(id *)a1;
- (id)makeAVAssetExportSessionWith:(id)a0 options:(id)a1 presetName:(id)a2;
- (id)makeAVPlayerItemWith:(id)a0 options:(id)a1;
- (id)serializedDataAndReturnError:(id *)a0;

@end
