@interface CLCppContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) const void *cppObjectPtr;
@property (copy, nonatomic) id /* block */ destructor;
@property (readonly, nonatomic) unsigned long long binaryVersion;
@property (readonly, nonatomic) unsigned long long sizeOfType;

+ (id)containerWithObject:(void *)a0 destructor:(id /* block */)a1 binaryVersion:(unsigned long long)a2 typeSize:(unsigned long long)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithObject:(void *)a0 destructor:(id /* block */)a1 binaryVersion:(unsigned long long)a2 typeSize:(unsigned long long)a3;

@end
