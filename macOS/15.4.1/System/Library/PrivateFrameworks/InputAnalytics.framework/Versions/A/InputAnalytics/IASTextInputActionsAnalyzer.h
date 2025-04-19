@class NSDictionary, NSMutableDictionary, NSString;

@interface IASTextInputActionsAnalyzer : IASDailyGarbageCollectionAnalyzer {
    NSMutableDictionary *_entries;
    BOOL _sessionIsModeless;
    unsigned long long _largestSessionInsertionLength;
    unsigned long long _largestSessionDeletionLength;
    long long _sessionNetCharacters;
    BOOL _insertionObservedInSession;
    unsigned long long _charsRemovedBeforeFirstInsertionCount;
    unsigned long long _emojisRemovedBeforeFirstInsertionCount;
    NSString *_name;
    NSString *_mostRecentAppBundleId;
    NSString *_mostRecentProcessId;
}

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (id)getOrInitializeArrayFromArray:(id)a0 forKey:(unsigned long long)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeArrayFromDictionary:(id)a0 forKey:(id)a1 initCapacity:(unsigned long long)a2;
+ (id)getOrInitializeDictionaryFrom:(id)a0 forKey:(unsigned long long)a1 initCapacity:(long long)a2;
+ (id)analyzerWithName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)computeSessionActionsStringOnSession:(id)a0;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (void)increaseCountForAppBundleId:(id)a0 forSource:(long long)a1 forActionType:(long long)a2 forFlagOptions:(long long)a3 forInputModeKey:(id)a4 byAnalyzerEntry:(id)a5;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;

@end
