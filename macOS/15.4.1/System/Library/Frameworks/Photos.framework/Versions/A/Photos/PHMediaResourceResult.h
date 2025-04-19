@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (void).cxx_destruct;
- (id)exifOrientation;
- (id)imageURL;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)mediaMetadata;
- (id)allowedInfoKeys;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (BOOL)containsValidData;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (id)sanitizedInfoDictionary;

@end
