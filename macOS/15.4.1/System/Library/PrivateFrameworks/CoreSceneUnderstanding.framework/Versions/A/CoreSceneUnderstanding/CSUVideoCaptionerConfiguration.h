@class NSString, CSUBeamSearchConfiguration;
@protocol MLComputeDeviceProtocol;

@interface CSUVideoCaptionerConfiguration : NSObject

@property (copy, nonatomic) NSString *configPath;
@property (nonatomic) BOOL saveDecoderFeatures;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> espressoDevice;
@property (retain, nonatomic) CSUBeamSearchConfiguration *beamSearch;

+ (id)CSUVideoCaptioningConfigurationWithConfigPath:(id)a0 error:(id *)a1;
+ (id)CSUVideoCaptionerConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initWithConfigPath:(id)a0;

@end
