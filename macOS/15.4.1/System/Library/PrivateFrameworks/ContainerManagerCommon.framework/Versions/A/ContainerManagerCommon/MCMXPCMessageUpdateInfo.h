@class NSSet, NSDictionary, MCMConcreteContainerIdentity;

@interface MCMXPCMessageUpdateInfo : MCMXPCMessageWithConcreteContainerBase <MCMParametersUpdateInfo>

@property (readonly, nonatomic) NSSet *deleteKeys;
@property (readonly, nonatomic) NSDictionary *infoDict;
@property (readonly, nonatomic) BOOL fullReplace;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) BOOL includedPath;
@property (readonly, nonatomic) BOOL includedInfo;
@property (readonly, nonatomic) BOOL includedUserManagedAssetsPath;
@property (readonly, nonatomic) BOOL includedCreator;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
