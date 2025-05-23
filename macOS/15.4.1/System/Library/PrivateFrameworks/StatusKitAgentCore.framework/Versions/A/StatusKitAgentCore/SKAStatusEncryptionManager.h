@class NSString;
@protocol SKADatabaseManaging, SKAInvitationManaging;

@interface SKAStatusEncryptionManager : NSObject <SKAStatusEncryptionManaging>

@property (readonly, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (readonly, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (id)_decryptPayload:(id)a0 withRatchetIndex:(unsigned short)a1 signatureData:(id)a2 channel:(id)a3;
- (id)_decryptPayloadData:(id)a0 withIncomingRatchet:(id)a1 withRatchetIndex:(unsigned short)a2 signatureData:(id)a3;
- (id)_deserializeBinaryPlistDictionaryData:(id)a0;
- (id)_encryptPayload:(id)a0 channel:(id)a1;
- (id)_mostRecentIncomingRatchetForChannel:(id)a0;
- (id)_serializeDictionaryAsBinaryPlist:(id)a0;
- (id)decryptStatusPayloadFromStatusEnvelopeData:(id)a0 channel:(id)a1;
- (id)encodeStatusPayload:(id)a0 statusUniqueIdentifier:(id)a1 dateCreated:(id)a2 currentServerTime:(id)a3 channel:(id)a4;
- (void)encodeStatusPayloadForProvisioning:(id)a0 statusUniqueIdentifier:(id)a1 dateCreated:(id)a2 currentServerTime:(id)a3 channel:(id)a4;
- (id)encryptionValidationTokenForChannel:(id)a0;
- (id)extractEnvelopeFromStatusEnvelopeData:(id)a0;
- (id)initWithDatabaseManager:(id)a0 invitationManager:(id)a1;

@end
