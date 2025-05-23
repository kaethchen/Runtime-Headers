@class NSDictionary, NSString;

@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding> {
    NSDictionary *_aspectRatioToCRABSVideoDictionaries;
    NSDictionary *_aspectRatioToHLSVideoURL;
    NSDictionary *_aspectRatioToPreviewFrameArtworkInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CRABSVideoURLMatchingSize:(struct CGSize { double x0; double x1; })a0;
- (id)HLSVideoURLForAspectRatio:(double)a0;
- (id)previewFrameArtworkInfoMatchingAspectRatio:(double)a0;
- (id)supportedSizesForCRABSVideoForAspectRatio:(double)a0;
- (id)_aspectRatioKeyForAspectRatio:(double)a0;
- (id)initWithVideoArtworkResponseDictionary:(id)a0;

@end
