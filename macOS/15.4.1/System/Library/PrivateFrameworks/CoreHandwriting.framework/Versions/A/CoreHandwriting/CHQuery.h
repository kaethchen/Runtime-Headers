@class NSString, CHRecognitionSession, CHRecognitionSessionResult, NSObject;
@protocol OS_dispatch_queue, CHQueryDelegate, CHStrokeProviderVersion;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    double _lastProcessedTime;
    BOOL _isTearingDown;
    BOOL __queryActive;
    id<CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSString *debugName;
@property (weak, nonatomic) id<CHQueryDelegate> delegate;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (readonly, copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;
@property (nonatomic) double preferredUpdatesInterval;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (id)q_sessionResult;
- (id)initWithRecognitionSession:(id)a0;
- (BOOL)needsForegroundRecognition;
- (double)preferredRecognitionResultUpdatesInterval;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (void)q_queryResultDidChange;
- (BOOL)q_resultWantedForCompleteness:(long long)a0;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (void)waitForPendingUpdates;
- (BOOL)wantsAutoRefineUpdates;

@end
