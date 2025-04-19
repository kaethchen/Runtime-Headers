@class NSString;

@interface BWCMPhotoEncoderManager : NSObject <BWPhotoEncoderManager> {
    struct CMPhotoCompressionSession { } *_photoCompressionSession;
    long long _currentSettingsID;
    unsigned long long _containerSize;
    int _containerFormat;
    BOOL _asyncEncoding;
}

@property (readonly, nonatomic) unsigned long long auxiliaryImagesSize;
@property (readonly, nonatomic) unsigned long long thumbnailImageSize;
@property (readonly, nonatomic) unsigned long long containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (BOOL)isContainerOpen;
- (int)addAlternateImageWithDerivedImageHandles:(id)a0 options:(id)a1 parentImageHandle:(long long)a2 alternateGroupHandleInOut:(long long *)a3;
- (int)addAuxImage:(struct __CVBuffer { } *)a0 type:(int)a1 auxImageMetadata:(struct CGImageMetadata { } *)a2 options:(id)a3 parentImageHandle:(long long)a4 auxImageHandleOut:(long long *)a5;
- (int)addAuxImageMetadata:(struct CGImageMetadata { } *)a0 type:(int)a1 auxImageHandle:(long long)a2 options:(id)a3 parentImageHandle:(long long)a4;
- (int)addCompressedThumbnailImage:(struct __IOSurface { } *)a0 thumbnailImageSize:(unsigned long long)a1 options:(id)a2;
- (int)addCustomMetadataContents:(id)a0 URI:(id)a1 name:(id)a2;
- (int)addMainImage:(struct __CVBuffer { } *)a0 metadata:(id)a1 options:(id)a2 imageHandleOut:(long long *)a3;
- (int)addMetadata:(id)a0 parentImageHandle:(long long)a1;
- (int)addThumbnailImage:(struct __CVBuffer { } *)a0 options:(id)a1 parentImageHandle:(long long)a2;
- (int)closeContainer;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface **)a0;
- (id)initWithDeferredPhotoProcessorEnabled:(BOOL)a0;
- (int)openContainerWithOptions:(id)a0 settingsID:(long long)a1;
- (int)openExistingContainer:(struct __IOSurface { } *)a0 options:(id)a1;
- (int)tagStereoPairGroupWithStereoPhotoImageHandles:(struct { long long x0; long long x1; long long x2; })a0 groupMetadata:(id)a1;

@end
