@class WBSJSONMutator, NSString, NSArray, WBSParsecDSession, PARResponse;

@interface WBSPegasusResponseFuzzer : NSObject {
    NSString *_query;
    unsigned long long _indexOfCurrentResponse;
    NSArray *_validJSONPARResponse;
    PARResponse *_currentResponse;
    WBSJSONMutator *_jsonMutator;
    BOOL _shouldAttachMutatedJSONToTestResultKeys;
    id _lastSimulatedJSON;
}

@property (class, readonly, nonatomic) WBSPegasusResponseFuzzer *sharedFuzzer;

@property (readonly, nonatomic) WBSParsecDSession *parsecSession;

+ (id)_protectedFields;

- (id)init;
- (void).cxx_destruct;
- (void)_recordMutatedPegasusResponseJSON;
- (id)_validPegasusResponseForKey:(id)a0;
- (id)initWithParsecSession:(id)a0 sampleResponsesPlistKey:(id)a1;
- (id)responseForQuery:(id)a0;

@end
