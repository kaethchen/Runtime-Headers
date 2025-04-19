@class NSString, C2RequestOptions, NSURL, NSData, NSError;

@interface CKAssetStreamHandle : NSObject {
    void /* unknown type, empty encoding */ assetStreamHandleInternal;
}

@property (class, nonatomic, readonly) C2RequestOptions *networkRequestOptions;

@property (nonatomic, readonly) long long size;

+ (void)makeAssetStreamHandleFromURL:(NSURL *)a0 assetKey:(NSData *)a1 filenameExtension:(NSString *)a2 completionHandler:(void (^)(CKAssetStreamHandle *, NSError *))a3;

- (id)init;
- (void).cxx_destruct;
- (id)serializedData:(id *)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)makeAVAssetExportSessionWith:(id)a0 options:(id)a1 presetName:(id)a2;
- (id)makeAVPlayerItemWith:(id)a0 options:(id)a1;

@end
