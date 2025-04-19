@class NSArray, NSMutableDictionary;

@interface CKDShareAccessRequestURLRequest : CKDURLRequest

@property (copy, nonatomic) NSArray *shareMetadatasToRequestAccess;
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID;
@property (copy, nonatomic) id /* block */ shareAccessRequestedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 shareMetadatasToRequestAccess:(id)a1;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
