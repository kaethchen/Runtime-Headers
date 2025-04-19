@class BackendXPC;

@interface AEABackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;
@property (readonly, nonatomic) struct shared_ptr<unsigned char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } key;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithBackend:(id)a0 key:(struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; })a1;

@end
