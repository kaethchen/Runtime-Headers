@interface MTLSimSharedEventHandle : MTLSharedEventHandle <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventPort:(unsigned int)a0 labelTraceID:(unsigned long long)a1 label:(id)a2;

@end
