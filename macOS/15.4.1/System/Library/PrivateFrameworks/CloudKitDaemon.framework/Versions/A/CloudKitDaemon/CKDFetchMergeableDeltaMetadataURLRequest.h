@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSDictionary *continuationTokens;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 continuationTokens:(id)a2;
- (int)isolationLevel;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
