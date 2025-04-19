@class DADevice;

@interface DAEventDevice : DAEvent

@property (readonly, nonatomic) DADevice *device;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithEventType:(long long)a0 device:(id)a1;
- (id)initWithEventType:(long long)a0 device:(id)a1 error:(id)a2;

@end
