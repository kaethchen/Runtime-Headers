@class MPCModelGenericAVItemAssetLoadProperties, ICMediaRedownloadRequest, ICStoreRequestContext, NSObject;
@protocol OS_dispatch_queue;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICMediaRedownloadRequest *_mediaDownloadRequest;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;

@end
