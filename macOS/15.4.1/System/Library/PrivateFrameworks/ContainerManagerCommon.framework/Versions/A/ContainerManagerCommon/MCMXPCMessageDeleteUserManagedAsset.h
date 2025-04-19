@class NSString, MCMContainerIdentity;

@interface MCMXPCMessageDeleteUserManagedAsset : MCMXPCMessageWithContainerBase <MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
