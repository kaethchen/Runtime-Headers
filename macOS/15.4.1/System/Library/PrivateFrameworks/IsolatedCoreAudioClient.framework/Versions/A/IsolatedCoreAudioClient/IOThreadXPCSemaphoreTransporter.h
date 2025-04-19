@class NSObject;
@protocol OS_xpc_object;

@interface IOThreadXPCSemaphoreTransporter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *clientListenableSemaphore;
@property (retain, nonatomic) NSObject<OS_xpc_object> *clientPingableSemaphore;

+ (id)semaphores:(const struct ClientIOThreadSynchronizerSemaphores { unsigned int x0; unsigned int x1; } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct ClientIOThreadSynchronizerSemaphores { unsigned int x0; unsigned int x1; })getSemaphores;
- (id)initWithSemaphores:(id)a0 :(id)a1;

@end
