@class NSNumber;

@interface DRSTailspinRequest : DRSRequest

@property (class, nonatomic) BOOL enforceMinTraceBufferDuration;

@property (readonly, nonatomic) BOOL includeOsSignpost;
@property (readonly, nonatomic) BOOL includeOsLog;
@property (readonly, nonatomic) BOOL scrubbed;
@property (readonly, nonatomic) NSNumber *minMAT;
@property (readonly, nonatomic) NSNumber *maxMAT;

+ (id)entityName;
+ (Class)_moClass;
+ (BOOL)_shouldScrub;
+ (id)requiredSystemResourceName;
+ (void)resetEnforceMinTraceBufferDuration;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)requestType;
- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)logType;
- (void)_configureRequestMO:(id)a0;
- (BOOL)_dumpTailspinToDirectory:(id)a0;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (id)_tailspinOptions;
- (unsigned long long)expectedType;

@end
