@class NSDate, NSString, NSArray, NSURL, CLPlacemark, NSValue, NSDictionary, KHPhotoLocationMetadata;
@protocol MapPointOfInterestProtocol, KHEventInfoProtocol, NSCopying;

@interface KHPhoto : NSObject <KHPhotoInfoProtocol> {
    struct CGSize { double width; double height; } _imagePixelSize;
    NSValue *_imageLocation;
    CLPlacemark *_placemark;
}

@property (retain, nonatomic) KHPhotoLocationMetadata *locationMetadata;
@property (retain, nonatomic) CLPlacemark *placemark;
@property (nonatomic) unsigned long long imageOrientation;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) id rawAsset;
@property (readonly) NSString *pageLayoutPhotoID;
@property (readonly) id<NSCopying> pageLayoutPhotoAddress;
@property (readonly) struct CGSize { double x0; double x1; } pageLayoutImageSize;
@property (readonly) double pageLayoutImageAspectRatio;
@property (readonly) unsigned long long pageLayoutOrientation;
@property (readonly) NSDate *pageLayoutPhotoDate;
@property (readonly) NSDate *pageLayoutPhotoModificationDate;
@property (readonly) NSArray *pageLayoutKeywordInfos;
@property (readonly) NSString *pageLayoutFilename;
@property (readonly) NSString *pageLayoutAnnotation;
@property (readonly) NSString *pageLayoutTitle;
@property (readonly) double pageLayoutNormalizedRating;
@property (readonly) NSDictionary *pageLayoutExifMetaData;
@property (readonly) id<MapPointOfInterestProtocol> pageLayoutLocationMetaData;
@property (readonly) NSArray *pageLayoutFaceInfos;
@property (readonly) NSString *pageLayoutEventID;
@property (readonly) id<KHEventInfoProtocol> pageLayoutEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageLoadingQueue;
+ (id)photoWithFileURL:(id)a0;
+ (id)photoWithItemProvider:(id)a0 extensionContext:(id)a1 extensionItem:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithFileURL:(id)a0;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (void)pageLayoutEncodeWithDictionary:(id)a0;
- (BOOL)pageLayoutImageHasBorderEffects;
- (id)_asyncLoadingMapTable;
- (void)cancelPageLayoutImageLoadingRequestWithIdentifier:(id)a0;
- (void)cancelPageLayoutImageWithObserverTarget:(id)a0;
- (id)initWithItemProvider:(id)a0 extensionContext:(id)a1 extensionItem:(id)a2;
- (id)loadPageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)pageLayoutAspectRatioThumbnailImage;
- (BOOL)pageLayoutImageExists;
- (BOOL)pageLayoutImageExistsSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pageLayoutImageHasColorAdjustments;
- (BOOL)pageLayoutImageHasLightAdjustments;
- (BOOL)pageLayoutImageHasRedEyeAdjustments;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1 withObserverTarget:(id)a2 selector:(SEL)a3 object:(id)a4;
- (BOOL)pageLayoutImageValid;
- (BOOL)pageLayoutImageValidSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutImageWithObserverTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)pageLayoutLocation;
- (id)pageLayoutPhotoId;
- (id)pageLayoutRating;
- (id)pageLayoutThumbnailImage;

@end
