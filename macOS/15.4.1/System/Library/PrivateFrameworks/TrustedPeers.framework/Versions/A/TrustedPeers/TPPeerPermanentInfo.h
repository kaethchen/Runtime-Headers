@class NSString, NSData;
@protocol TPPublicKey;

@interface TPPeerPermanentInfo : NSObject

@property (readonly, nonatomic) NSString *machineID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned long long epoch;
@property (readonly, nonatomic) id<TPPublicKey> signingPubKey;
@property (readonly, nonatomic) id<TPPublicKey> encryptionPubKey;
@property (readonly, nonatomic) unsigned long long creationTime;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;
@property (readonly, nonatomic) NSString *peerID;

+ (id)mungeModelID:(id)a0;
+ (id)peerIDForData:(id)a0 sig:(id)a1 peerIDHashAlgo:(long long)a2;
+ (id)permanentInfoWithMachineID:(id)a0 modelID:(id)a1 epoch:(unsigned long long)a2 signingKeyPair:(id)a3 encryptionKeyPair:(id)a4 creationTime:(unsigned long long)a5 peerIDHashAlgo:(long long)a6 error:(id *)a7;
+ (id)permanentInfoWithPeerID:(id)a0 data:(id)a1 sig:(id)a2 keyFactory:(id)a3;
+ (id)permanentInfoWithPeerID:(id)a0 data:(id)a1 sig:(id)a2 keyFactory:(id)a3 checkSig:(BOOL)a4;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithMachineID:(id)a0 modelID:(id)a1 epoch:(unsigned long long)a2 signingPubKey:(id)a3 encryptionPubKey:(id)a4 creationTime:(unsigned long long)a5 data:(id)a6 sig:(id)a7 peerID:(id)a8;

@end
