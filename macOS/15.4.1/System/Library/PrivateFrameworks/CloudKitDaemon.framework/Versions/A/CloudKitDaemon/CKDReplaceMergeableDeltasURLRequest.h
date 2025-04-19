@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)requestOperationsForRequest:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2;
- (int)isolationLevel;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
