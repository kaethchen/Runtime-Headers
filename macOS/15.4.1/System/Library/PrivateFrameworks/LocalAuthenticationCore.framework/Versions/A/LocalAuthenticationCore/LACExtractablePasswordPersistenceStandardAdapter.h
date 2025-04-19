@class NSString;
@protocol LACContext;

@interface LACExtractablePasswordPersistenceStandardAdapter : NSObject <LACExtractablePasswordPersistence> {
    id<LACContext> _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)extractPassword:(id *)a0;
- (void)extractPasswordWithCompletion:(id /* block */)a0;
- (void)stashPassword:(id)a0 completion:(id /* block */)a1;
- (BOOL)stashPassword:(id)a0 error:(id *)a1;
- (BOOL)_verifyHasRequiredPasswordLength:(id)a0 error:(id *)a1;

@end
