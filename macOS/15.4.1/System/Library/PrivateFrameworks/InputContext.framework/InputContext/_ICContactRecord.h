@class NSString, _ICContact;

@interface _ICContactRecord : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) _ICContact *contact;
@property (readonly, nonatomic) unsigned char changeType;
@property (readonly, nonatomic) unsigned char source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 contact:(id)a1 changeType:(unsigned char)a2 source:(unsigned char)a3;
- (BOOL)isEqualToContactRecord:(id)a0;

@end
