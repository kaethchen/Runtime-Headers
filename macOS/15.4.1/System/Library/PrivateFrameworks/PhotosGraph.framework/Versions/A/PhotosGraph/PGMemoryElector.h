@class PGRemoteConfiguration, PGManagerWorkingContext, PGCurationManager, CLSCurationContext, PHPhotoLibrary, NSObject, PHUserFeedbackCalculator;
@protocol OS_os_log;

@interface PGMemoryElector : NSObject {
    PGManagerWorkingContext *_workingContext;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PGCurationManager *_curationManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    CLSCurationContext *_curationContext;
    PGRemoteConfiguration *_remoteConfiguration;
}

+ (long long)compareMemoryCategoryForMemory:(id)a0 toOtherMemory:(id)a1;

- (void).cxx_destruct;
- (id)generateEnrichedMemoriesWithConfiguration:(id)a0 graph:(id)a1 progressReporter:(id)a2;
- (id)initWithWorkingContext:(id)a0 userFeedbackCalculator:(id)a1;
- (double)_contentScoreWeightForNewMemoryFocusWithCategory:(unsigned long long)a0;
- (BOOL)_memoryContainsNegativeFeedbackPets:(id)a0;
- (id)_requestedEnrichedMemoriesWithConfiguration:(id)a0 graph:(id)a1;
- (BOOL)_shouldCheckForSuggestionCollisionsForTriggeredMemory:(id)a0;
- (id)electAndEnrichSortedTriggeredMemories:(id)a0 alreadyEnrichedMemories:(id)a1 targetNumberOfMemories:(unsigned long long)a2 configuration:(id)a3 graph:(id)a4 planner:(id)a5 context:(id)a6 progressReporter:(id)a7;
- (id)filterAndSortTriggeredMemories:(id)a0 withPlanner:(id)a1 context:(id)a2 configuration:(id)a3 progressReporter:(id)a4;
- (id)generateEnrichedMemoriesWithConfiguration:(id)a0 graph:(id)a1 plannerPastSource:(id)a2 plannerFutureSource:(id)a3 progressReporter:(id)a4;
- (void)persistEnrichedMemories:(id)a0 pendingState:(unsigned short)a1 graph:(id)a2 progressReporter:(id)a3;
- (unsigned long long)targetNumberOfMemoriesFromConfigurator:(id)a0 graph:(id)a1 context:(id)a2;

@end
