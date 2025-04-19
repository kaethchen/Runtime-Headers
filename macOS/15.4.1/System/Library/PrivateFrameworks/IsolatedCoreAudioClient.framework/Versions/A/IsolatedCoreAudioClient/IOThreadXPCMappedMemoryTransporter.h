@class NSObject;
@protocol OS_xpc_object;

@interface IOThreadXPCMappedMemoryTransporter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *serverMemory;

+ (id)memory:(const struct MappedMemory { void *x0; unsigned long long x1; } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct MappedMemory { void *x0; unsigned long long x1; })getMappedMemory;

@end
