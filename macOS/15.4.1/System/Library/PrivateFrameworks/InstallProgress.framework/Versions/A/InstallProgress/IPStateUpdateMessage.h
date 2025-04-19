@class LSApplicationIdentity;

@interface IPStateUpdateMessage : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) LSApplicationIdentity *identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)XPCDictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0 identity:(id)a1;
- (id)initWithXPCDictionaryRepresentation:(id)a0 error:(id *)a1;

@end
