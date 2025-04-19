@class NSArray, NSString;

@interface LNSystemEntityProtocol : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *allProtocols;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *assistantEntityProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailAccountProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailAddresseeProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailMessageProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailboxProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *intentMessageProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *messageGroupProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *messageParticipantProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *uniqueEntityProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *updatableEntityProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *indexedEntityProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *persistentFileIdentifiableEntityProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *visualSearchProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *visualSearchOCRProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *urlRepresentableProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *structuredDataRepresentableTypeProtocol;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;

+ (id)allProtocolsByIdentifier;
+ (id)protocolWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
