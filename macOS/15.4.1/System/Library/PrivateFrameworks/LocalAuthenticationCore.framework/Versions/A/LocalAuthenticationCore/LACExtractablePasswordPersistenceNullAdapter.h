@class NSString;

@interface LACExtractablePasswordPersistenceNullAdapter : NSObject <LACExtractablePasswordPersistence>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractPassword:(id *)a0;
- (void)extractPasswordWithCompletion:(id /* block */)a0;
- (void)stashPassword:(id)a0 completion:(id /* block */)a1;
- (BOOL)stashPassword:(id)a0 error:(id *)a1;
- (id)_serviceNotSupportedInCurrentPlatform;

@end
