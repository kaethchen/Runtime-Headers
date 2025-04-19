@class STContactAddress;

@interface STCall : STSiriModelObject {
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)service;
- (void)setService:(long long)a0;
- (id)_aceContextObjectValue;
- (id)initiatorAddress;
- (id)recipientAddress;
- (void)setInitiatorAddress:(id)a0;
- (void)setRecipientAddress:(id)a0;

@end
