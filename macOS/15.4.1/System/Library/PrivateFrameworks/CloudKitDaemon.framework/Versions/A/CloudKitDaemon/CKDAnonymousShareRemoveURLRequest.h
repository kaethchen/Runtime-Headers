@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToRemove:(id)a1;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;

@end
