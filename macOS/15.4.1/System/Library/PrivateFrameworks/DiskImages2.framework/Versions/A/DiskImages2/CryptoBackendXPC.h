@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isUnlocked;
- (id)initWithFormat:(const void *)a0 baseBackendXPC:(id)a1;
- (void)replaceWithBackendXPC:(id)a0;

@end
