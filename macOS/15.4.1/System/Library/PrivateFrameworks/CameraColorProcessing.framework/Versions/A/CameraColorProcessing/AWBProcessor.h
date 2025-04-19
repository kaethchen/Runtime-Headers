@class AWBAlgorithm, CMIExternalMemoryResource, NSDictionary, NSString, FigMetalContext, NSMutableDictionary, AWBStatistics;
@protocol AWBIBPParams, MTLCommandQueue;

@interface AWBProcessor : NSObject <AWBImageBufferProcessor> {
    FigMetalContext *_metalContext;
    NSMutableDictionary *_stats;
    AWBStatistics *_awbStats;
    AWBAlgorithm *_awbAlgo;
    BOOL _configured;
    BOOL _allocatorSetupComplete;
}

@property (readonly, nonatomic) id<AWBIBPParams> awbParams;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)calculateSTRBKeyFromWideCamera:(struct { int x0; union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; } x1; } *)a0 moduleConfig:(id)a1;
+ (int)getColorCalibrationsUsingIdealColorCalbrations:(id)a0 absoluteColorCalibrations:(id)a1 colorCalibrationsOut:(id *)a2 awbConfig:(id)a3;
+ (int)getInternalAWBMetadataForMIWB:(id)a0 cameraInfo:(id)a1 metadata:(id)a2 validRect:(id)a3 secondaryModuleConfig:(id)a4 secondaryCameraInfo:(id)a5;

- (void)dealloc;
- (void).cxx_destruct;
- (int)prewarm;
- (int)finishProcessing;
- (int)process;
- (int)resetState;
- (int)setup;
- (int)prepareToProcess:(unsigned int)a0;
- (int)purgeResources;

@end
