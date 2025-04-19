@class NSData, CKEncryptedData, NSString;

@interface CKOneTimeURLMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKEncryptedData *encryptedOneTimeFullToken;
@property (readonly, copy, nonatomic) NSData *sharingKeyBytes;
@property (readonly, copy, nonatomic) NSData *sharingKeySeed;
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, nonatomic) NSString *oneTimeShortSharingToken;
@property (readonly, nonatomic) NSData *oneTimeShortSharingTokenHashData;
@property (readonly, nonatomic) NSData *encryptedOneTimeFullTokenData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncryptedOneTimeFullToken:(id)a0 participantID:(id)a1;
- (id)initWithSharingKeyBytes:(id)a0 sharingKeySeed:(id)a1 participantID:(id)a2;
- (id)oneTimeFullToken;
- (id)oneTimeFullTokenProtoMessageData;
- (id)oneTimeShortSharingTokenData;
- (id)oneTimeShortTokenWithRoutingKey:(id)a0;

@end
