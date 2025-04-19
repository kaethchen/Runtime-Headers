@class NSArray, NSDictionary, NSData, NSMutableDictionary, NSMutableArray;

@interface CKDModifyRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity;
@property (nonatomic) BOOL oplock;
@property (nonatomic) BOOL sendAllFields;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (retain, nonatomic) NSMutableDictionary *mergeableFieldKeyByRequestID;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) BOOL containsMergeableValues;
@property (retain, nonatomic) NSMutableArray *skippedRecordsWithPurelyMergeableChanges;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) BOOL atomic;
@property (nonatomic) BOOL sendMergeableDeltas;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) id /* block */ recordPostedBlock;
@property (copy, nonatomic) id /* block */ mergeableDeltaSavedBlock;
@property (copy, nonatomic) id /* block */ replacedDeltasBlock;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateMergeableDeltaSaveOperationsForRecord:(id)a0 error:(id *)a1;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 recordsToSave:(id)a1 recordIDsToDelete:(id)a2 recordIDsToDeleteToSigningPCSIdentity:(id)a3 oplock:(BOOL)a4 sendAllFields:(BOOL)a5 clientChangeTokenData:(id)a6 requestedFieldsByRecordId:(id)a7;
- (int)isolationLevel;
- (id)recordIDsUsedInZones:(id)a0;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousSignature;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (id)zoneIDsToLock;

@end
