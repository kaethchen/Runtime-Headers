@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (void).cxx_destruct;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)livePhotoPairingIdentifier;
- (id)_makeGPSProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)originalFilenamee;
- (id)plistForEncoding;

@end
