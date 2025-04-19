@class NSError;
@protocol TRIXPCStatusServiceProtocol;

@interface TRIExperimentHistorySysdiagnoseProvider : NSObject <TRISysdiagnoseInfoProviding>

@property (retain, nonatomic) id<TRIXPCStatusServiceProtocol> syncStatusProvider;
@property (retain, nonatomic) NSError *xpcError;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)filename;
- (id)_allHistoryRecordsWithError:(id *)a0;
- (id)_experimentHistoryRecordsForEnvironment:(int)a0 error:(id *)a1;
- (id)initIncompleteProvider;
- (id)sysdiagnoseLinesWithError:(id *)a0;

@end
