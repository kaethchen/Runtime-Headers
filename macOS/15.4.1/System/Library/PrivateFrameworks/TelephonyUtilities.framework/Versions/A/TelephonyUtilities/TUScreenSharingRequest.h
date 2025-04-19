@class NSUUID, TUHandle;

@interface TUScreenSharingRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isLocallyOriginated;
@property (readonly, nonatomic) long long originType;
@property (readonly, nonatomic) BOOL shouldSendLegacyInvite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithHandle:(id)a0 shareMyScreen:(BOOL)a1 originType:(long long)a2 shouldSendLegacyInvite:(BOOL)a3;
- (id)initWithHandle:(id)a0 type:(long long)a1 originType:(long long)a2 UUID:(id)a3 participantIdentifier:(unsigned long long)a4;
- (id)initWithHandle:(id)a0 type:(long long)a1 originType:(long long)a2 UUID:(id)a3 participantIdentifier:(unsigned long long)a4 shouldSendLegacyInvite:(BOOL)a5;

@end
