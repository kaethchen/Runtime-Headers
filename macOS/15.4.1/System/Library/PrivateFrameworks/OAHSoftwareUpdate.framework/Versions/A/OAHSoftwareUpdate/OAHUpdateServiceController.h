@interface OAHUpdateServiceController : NSObject

@property (readonly) unsigned long long repositoryType;

- (id)_serviceConnectionWithError:(id *)a0;
- (BOOL)clearRepositoryWithError:(id *)a0;
- (id)registerPackage:(id)a0 digest:(id)a1 error:(id *)a2;

@end
