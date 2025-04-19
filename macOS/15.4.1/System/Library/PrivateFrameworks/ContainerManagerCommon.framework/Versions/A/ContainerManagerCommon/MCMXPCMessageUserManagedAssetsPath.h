@class MCMContainerIdentity;

@interface MCMXPCMessageUserManagedAssetsPath : MCMXPCMessageWithContainerBase <MCMParametersUserManagedAssetsPath>

@property (readonly, nonatomic, getter=isRelative) BOOL relative;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
