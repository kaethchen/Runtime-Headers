@class NSString, BWNodeOutput, NSData;

@interface BWRealtimeCinematographyNode : BWNode

@property (readonly, nonatomic) BWNodeOutput *detectedObjectsOutput;
@property (nonatomic) float simulatedAperture;
@property (readonly, nonatomic) NSString *cinematographyModelVersionString;
@property (readonly, nonatomic) BWNodeOutput *movieFileOutput;
@property (readonly, nonatomic) BWNodeOutput *previewOutput;
@property (readonly, nonatomic) NSData *globalMetadata;

+ (void)initialize;

- (id)initWithObjectMetadataIdentifiers:(id)a0 cachedSimulatedAperture:(float)a1 captureDevice:(id)a2 tuningParameters:(id)a3 videoDepthConfiguration:(id)a4 smartStyleLearningEnabled:(BOOL)a5 captureInputEnabled:(BOOL)a6;

@end
