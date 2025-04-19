@class NSString;

@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL runLinearInterpolator;
@property (readonly, nonatomic) BOOL runInertialIntegrator;
@property (readonly, nonatomic) BOOL runMapIntegrator;
@property (readonly, nonatomic) BOOL useXPCServiceForMapQuery;
@property (readonly, nonatomic) BOOL shouldRecordDataInFileForReplay;
@property (readonly, nonatomic) BOOL createSparseDataFromOneHzData;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly, nonatomic) BOOL isSimulatedSparseProcessing;
@property (readonly, nonatomic) double timeBetweenReconstructedPointsSeconds;
@property (readonly, nonatomic) BOOL useParticleMapMatcherForSnappingInMapIntegrator;
@property (readonly, nonatomic) NSString *tripSegmentRecorderLoggingDirectory;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCreateSparseDataFromOneHzData:(BOOL)a0;
- (void)setNetworkAccessAllowed:(BOOL)a0;
- (void)setRunInertialIntegrator:(BOOL)a0;
- (void)setRunLinearInterpolator:(BOOL)a0;
- (void)setRunMapIntegrator:(BOOL)a0;
- (void)setSimulatedSparseProcessing:(BOOL)a0;
- (void)setTimeBetweenReconstructedPointsSeconds:(double)a0;
- (void)setTripSegmentRecorderLoggingDirectory:(id)a0;
- (void)setUseParticleMapMatcherForSnappingInMapIntegrator:(BOOL)a0;
- (void)setUseXPCService:(BOOL)a0;
- (void)setshouldRecordDataInFileForReplay:(BOOL)a0;

@end
