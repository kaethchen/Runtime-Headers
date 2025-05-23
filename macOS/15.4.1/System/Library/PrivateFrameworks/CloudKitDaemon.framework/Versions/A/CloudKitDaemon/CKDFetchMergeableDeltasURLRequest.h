@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDsByRequestID;
@property (readonly, nonatomic) NSDictionary *previousContinuationTokens;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 previousContinuationTokens:(id)a2;
- (BOOL)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
