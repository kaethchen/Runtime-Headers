@class NSIndexSet, NSArray, NSDictionary, NSString, VEOpticalFlowConfiguration;

@interface VTOpticalFlowConfiguration : NSObject <VTFrameProcessorConfiguration> {
    VEOpticalFlowConfiguration *_veConfiguration;
    unsigned int _flowPixelFormat;
}

@property (class, readonly, nonatomic) NSIndexSet *supportedRevisions;
@property (class, readonly, nonatomic) long long defaultRevision;
@property (class, readonly, nonatomic) unsigned char processorSupported;
@property (class, readonly, nonatomic) struct { int x0; int x1; } maximumDimensions;
@property (class, readonly, nonatomic) struct { int x0; int x1; } minimumDimensions;

@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) long long qualityPrioritization;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *destinationPixelBufferAttributes;
@property (readonly, nonatomic) long long nextFrameCount;
@property (readonly, nonatomic) long long previousFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)dealloc;
- (id)veConfiguration;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 qualityPrioritization:(long long)a2 revision:(long long)a3;

@end
