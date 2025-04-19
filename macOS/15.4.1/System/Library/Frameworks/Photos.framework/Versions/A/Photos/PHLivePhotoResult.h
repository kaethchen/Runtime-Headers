@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (void).cxx_destruct;
- (BOOL)isPlaceholder;
- (id)imageData;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)addImageResult:(id)a0;
- (id)allowedInfoKeys;
- (unsigned int)cgOrientation;
- (BOOL)containsValidData;
- (BOOL)isDegraded;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(BOOL)a0;
- (void)setRequiresImageResult:(BOOL)a0;
- (long long)uiOrientation;
- (id)videoAdjustmentData;

@end
