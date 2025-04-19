@class PHResourceLocalAvailabilityRequest, NSString, NSArray, NSURL, PHObject, PHAsset, NSData;

@interface PXPasteboardItemData : NSObject <NSPasteboardItemDataProvider>

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) PHObject *object;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSData *cachedImageData;
@property (readonly, nonatomic) PHResourceLocalAvailabilityRequest *resourceRequest;
@property (readonly, nonatomic) BOOL allowsResourceDownload;
@property (readonly, nonatomic) BOOL exportAsMaster;
@property (readonly, nonatomic) BOOL stripLocation;
@property (readonly, nonatomic) NSArray *types;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)assetRequiresFullSize:(id)a0;
+ (id)dataForObject:(id)a0 exportAsMaster:(BOOL)a1 stripLocation:(BOOL)a2;
+ (id)dataForObject:(id)a0 exportAsMaster:(BOOL)a1 stripLocation:(BOOL)a2 allowsResourceDownload:(BOOL)a3;
+ (id)imageDataGenerationLog;
+ (id)imageInfoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)typesForAsset:(id)a0 previewType:(id)a1;

- (void).cxx_destruct;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (id)_dataForImageAtURL:(id)a0;
- (void)_downloadResourcesForAsset:(id)a0 completion:(id /* block */)a1;
- (void)_setPasteboardItemURLForImageWithURL:(id)a0 pasteboard:(id)a1 item:(id)a2 type:(id)a3;
- (void)downloadResourcesIfNeeded:(id /* block */)a0;
- (id)initWithAsset:(id)a0 exportAsMaster:(BOOL)a1 stripLocation:(BOOL)a2 allowsResourceDownload:(BOOL)a3;

@end
