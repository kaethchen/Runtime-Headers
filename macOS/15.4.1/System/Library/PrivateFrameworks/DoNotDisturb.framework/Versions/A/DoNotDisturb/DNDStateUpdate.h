@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) DNDState *previousState;
@property (readonly, copy) DNDState *state;
@property (readonly) unsigned long long reason;
@property (readonly) long long source;
@property (readonly) long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPreviousState:(id)a0 state:(id)a1 reason:(unsigned long long)a2 source:(long long)a3 options:(long long)a4;

@end
