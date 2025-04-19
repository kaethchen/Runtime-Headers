@class NSUUID, NSString, NSData, NSDate, NSMutableSet;

@interface IDSGroupEncryptionKeyMaterial : NSObject <NSCopying> {
    NSMutableSet *_devicesToBeSent;
}

@property (class, nonatomic) unsigned int locallyGeneratedKeysCounter;
@property (class, readonly, nonatomic) NSUUID *keyOriginIdentifier;

@property (readonly, nonatomic) NSUUID *keyIndex;
@property (readonly, nonatomic) NSData *keySalt;
@property (readonly, nonatomic) NSData *keyMaterial;
@property (readonly, nonatomic) NSDate *createdAt;
@property (nonatomic) BOOL isSentToClient;
@property (nonatomic) BOOL isGeneratedLocally;
@property (nonatomic) unsigned int generationCounter;
@property (readonly, nonatomic) NSString *groupID;
@property (nonatomic) unsigned long long participantID;
@property (nonatomic) int ratchetIndex;
@property (nonatomic) unsigned char shortKeyIndexLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)changeCreatedAt:(id)a0;
- (id)initWithIndex:(id)a0 groupID:(id)a1 participantID:(unsigned long long)a2;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 generationCounter:(unsigned int)a4 participantID:(unsigned long long)a5;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 isGeneratedLocally:(BOOL)a4 createdAt:(id)a5 generationCounter:(unsigned int)a6 participantID:(unsigned long long)a7;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 isGeneratedLocally:(BOOL)a4 createdAt:(id)a5 generationCounter:(unsigned int)a6 participantID:(unsigned long long)a7 shortKeyIndexLength:(unsigned char)a8;
- (id)initWithKeyMaterial:(id)a0 keySalt:(id)a1 keyIndex:(id)a2 groupID:(id)a3 participantID:(unsigned long long)a4;
- (BOOL)isEqualToRealTimeEncryptionKeyMaterial:(id)a0;
- (void)removeDeviceFromSentToDevice:(id)a0;
- (void)sentToDevice:(id)a0;

@end
