@class NSDictionary, CKDAssetTokenRequest, NSMapTable;

@interface CKDFetchContentAuthTokensForPutURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (retain, nonatomic) NSMapTable *transactionStateByRequestIDs;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL useEncryption;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 assetTokenRequest:(id)a1 headers:(id)a2;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
