@class NSArray, NSProgress, NSDictionary, NUColorSpace;

@interface NUVideoExportRequest : NUExportRequest

@property (retain) NSProgress *progress;
@property (copy) NSDictionary *outputSettings;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy) NSArray *metadata;
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition;
@property (nonatomic) BOOL requireHardwareEncoder;
@property (nonatomic) BOOL applyOrientationAsMetadata;
@property (nonatomic) BOOL includeCinematicVideoTracks;
@property (nonatomic) BOOL includeSemanticStyleTracks;
@property (nonatomic) BOOL computeDigest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submitWithProgress:(id)a0 completion:(id /* block */)a1;

@end
