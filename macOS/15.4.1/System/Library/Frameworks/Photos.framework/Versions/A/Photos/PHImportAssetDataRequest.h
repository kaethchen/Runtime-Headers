@class PHImportCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PHImportCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAsset:(id)a0;
- (BOOL)isCanceled;

@end
