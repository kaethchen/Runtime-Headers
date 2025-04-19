@class PTGlobalStabilizationMetadata, NSString, PTGlobalRenderingMetadata, PTGlobalCinematographyMetadata, PTGlobalVideoHeaderMetadata;

@interface PTAssetCinematicGlobals : NSObject <PTAssetGlobals>

@property (retain, nonatomic) PTGlobalCinematographyMetadata *globalCinematographyMetadata;
@property (retain, nonatomic) PTGlobalRenderingMetadata *globalRenderingMetadata;
@property (retain, nonatomic) PTGlobalStabilizationMetadata *globalStabilizationMetadata;
@property (retain, nonatomic) PTGlobalVideoHeaderMetadata *globalVideoHeaderMetadata;
@property (readonly, nonatomic) NSString *colorPrimaries;
@property (readonly, nonatomic) NSString *transferFunction;
@property (readonly, nonatomic) NSString *YCbCrMatrix;
@property (readonly, nonatomic) BOOL is420YUV10Bit;
@property (readonly, nonatomic) unsigned long long estimatedDataRate;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
