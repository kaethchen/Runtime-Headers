@class PTTimedStabilizationMetadata, NSString, PTCinematographyFrame, PTTimedRenderingMetadata;

@interface PTAssetCinematicFrame : PTAssetReaderFrame <PTAssetFrame>

@property (retain, nonatomic) PTTimedRenderingMetadata *renderingMetadata;
@property (retain, nonatomic) PTTimedStabilizationMetadata *stabilizationMetadata;
@property (retain, nonatomic) PTCinematographyFrame *cinematographyFrame;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
