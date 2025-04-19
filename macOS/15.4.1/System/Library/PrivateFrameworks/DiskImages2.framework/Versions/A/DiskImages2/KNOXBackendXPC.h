@class DIURL;

@interface KNOXBackendXPC : BackendXPC

@property (copy, nonatomic) DIURL *URL;
@property (readonly, nonatomic) struct shared_ptr<unsigned char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } key;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithURL:(id)a0 key:(void *)a1;

@end
