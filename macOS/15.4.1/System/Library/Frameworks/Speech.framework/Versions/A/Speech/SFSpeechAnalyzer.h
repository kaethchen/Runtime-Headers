@class NSString, NSSet, NSDictionary, NSError, NSProgress;

@interface SFSpeechAnalyzer : NSObject {
    void /* unknown type, empty encoding */ _implementation;
}

+ (void)_endModelRetentionWithCompletion:(void (^)(void))a0;
+ (void)configurationForClientIdentifier:(id)a0 queue:(id)a1 transcriberOptions:(id)a2 languageDetectorOptions:(id)a3 speechDetectorOptions:(id)a4 transcriberResultDelegate:(id)a5 endpointingResultDelegate:(id)a6 languageDetectorResultDelegate:(id)a7 speechDetectorResultDelegate:(id)a8 considering:(id)a9 completion:(id /* block */)a10;
+ (void)speechAnalyzerWithConfiguration:(id)a0 inputAudioFile:(id)a1 options:(id)a2 restrictedLogging:(BOOL)a3 contextualNamedEntities:(id)a4 didChangeVolatileRange:(id /* block */)a5 completion:(id /* block */)a6;

- (id)init;
- (void).cxx_destruct;
- (void)addAudio:(id)a0;
- (void)resumeWithCompletion:(void (^)(NSError *))a0;
- (void)finalizeAndFinishThroughEndOfInputWithCompletion:(void (^)(NSError *))a0;
- (void)finishAudio;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 queue:(id)a4 transcriberOptions:(id)a5 options:(id)a6 restrictedLogging:(BOOL)a7 geoLMRegionID:(id)a8 contextualNamedEntities:(id)a9 didChangeVolatileRange:(id /* block */)a10;
- (void)cancelPendingResultsAndPauseWithCompletion:(void (^)(NSError *))a0;
- (void)finalizeThrough:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(void (^)(NSError *))a1;
- (void)finalizeWithCompletion:(void (^)(NSError *))a0;
- (void)getModelInfoLanguageWithCompletion:(id /* block */)a0;
- (void)getModelInfoLanguageWithCompletionWithError:(void (^)(NSString *, NSError *))a0;
- (void)getModelInfoTasksWithCompletion:(id /* block */)a0;
- (void)getModelInfoTasksWithCompletionWithError:(void (^)(NSSet *, NSError *))a0;
- (void)getNextBufferStartTimeWithCompletion:(void (^)(struct { long long x0; int x1; unsigned int x2; long long x3; }))a0;
- (void)getRecognitionStatisticsWithCompletion:(id /* block */)a0;
- (void)getRecognitionStatisticsWithCompletionWithError:(void (^)(NSDictionary *, NSError *))a0;
- (void)getRecognitionUtteranceStatisticsWithCompletionWithError:(void (^)(NSDictionary *, NSError *))a0;
- (void)getRecognitionUtterenceStatisticsWithCompletion:(id /* block */)a0;
- (id)initForAudioFileWithConfiguration:(id)a0 options:(id)a1 restrictedLogging:(BOOL)a2 didChangeVolatileRange:(id /* block */)a3;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 languageDetectorResultDelegate:(id)a4 queue:(id)a5 transcriberOptions:(id)a6 options:(id)a7 languageDetectorOptions:(id)a8 restrictedLogging:(BOOL)a9 contextualNamedEntities:(id)a10 didChangeVolatileRange:(id /* block */)a11;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 languageDetectorResultDelegate:(id)a4 queue:(id)a5 transcriberOptions:(id)a6 options:(id)a7 languageDetectorOptions:(id)a8 restrictedLogging:(BOOL)a9 geoLMRegionID:(id)a10 contextualNamedEntities:(id)a11 didChangeVolatileRange:(id /* block */)a12;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 languageDetectorResultDelegate:(id)a4 speechDetectorResultDelegate:(id)a5 queue:(id)a6 transcriberOptions:(id)a7 options:(id)a8 languageDetectorOptions:(id)a9 speechDetectorOptions:(id)a10 restrictedLogging:(BOOL)a11 contextualNamedEntities:(id)a12 didChangeVolatileRange:(id /* block */)a13;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 languageDetectorResultDelegate:(id)a4 speechDetectorResultDelegate:(id)a5 queue:(id)a6 transcriberOptions:(id)a7 options:(id)a8 languageDetectorOptions:(id)a9 speechDetectorOptions:(id)a10 restrictedLogging:(BOOL)a11 didChangeVolatileRange:(id /* block */)a12;
- (id)initWithClientIdentifier:(id)a0 audioFormat:(id)a1 transcriberResultDelegate:(id)a2 endpointingResultDelegate:(id)a3 queue:(id)a4 transcriberOptions:(id)a5 options:(id)a6 restrictedLogging:(BOOL)a7 didChangeVolatileRange:(id /* block */)a8;
- (id)initWithConfiguration:(id)a0 options:(id)a1 restrictedLogging:(BOOL)a2 contextualNamedEntities:(id)a3 didChangeVolatileRange:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0 options:(id)a1 restrictedLogging:(BOOL)a2 didChangeVolatileRange:(id /* block */)a3;
- (id)initWithConfiguration:(id)a0 options:(id)a1 restrictedLogging:(BOOL)a2 geoLMRegionID:(id)a3 contextualNamedEntities:(id)a4 didChangeVolatileRange:(id /* block */)a5;
- (void)prepareToAnalyzeReportingInto:(NSProgress *)a0 completion:(void (^)(NSError *))a1;
- (void)requestResultAtEndpointTimes:(id)a0;
- (void)setDidChangeVolatileRange:(void (^)(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; }, BOOL, BOOL))a0 completion:(void (^)(void))a1;

@end
