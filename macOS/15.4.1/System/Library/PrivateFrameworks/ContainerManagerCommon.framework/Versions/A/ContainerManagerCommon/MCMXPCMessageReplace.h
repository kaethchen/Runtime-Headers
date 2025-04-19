@class MCMConcreteContainerIdentity;

@interface MCMXPCMessageReplace : MCMXPCMessageBase <MCMParametersReplace>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

- (void).cxx_destruct;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
