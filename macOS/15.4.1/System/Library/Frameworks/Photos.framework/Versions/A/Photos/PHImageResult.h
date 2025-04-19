@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isPlaceholder;
- (id)imageData;
- (struct CGImage { } *)imageRef;
- (void)setImageRef:(struct CGImage { } *)a0;
- (id)imageURL;
- (void)setImageData:(id)a0;
- (void)setImageURL:(id)a0;
- (void)setIsPlaceholder:(BOOL)a0;
- (id)allowedInfoKeys;
- (BOOL)containsValidData;
- (BOOL)isDegraded;
- (BOOL)isDerivedFromDeferredPreview;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(BOOL)a0;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (long long)uiOrientation;

@end
