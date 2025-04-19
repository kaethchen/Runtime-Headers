@class NSString, MRUserIdentity;

@interface MRCodableGroupSessionParticipant : NSObject <MRGroupSessionParticipant, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUserIdentity *identity;
@property (nonatomic, getter=isPending) BOOL pending;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic, getter=isGuest) BOOL guest;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic, getter=isHost) BOOL host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 identity:(id)a1 connected:(BOOL)a2 guest:(BOOL)a3 hidden:(BOOL)a4;

@end
