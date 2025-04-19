@interface SUOSUEANReader : NSObject

@property unsigned int service;
@property unsigned int connection;

- (void)dealloc;
- (id)init;
- (BOOL)_connectToServiceIfNeededWithError:(id *)a0;
- (id)_errorWithDescription:(id)a0;
- (id)_errorWithDescription:(id)a0 underlyingError:(id)a1;
- (BOOL)_getSizeForKey:(unsigned long long)a0 outSize:(unsigned long long *)a1 error:(id *)a2;
- (id)_readKey:(unsigned long long)a0 withSize:(unsigned long long)a1 error:(id *)a2;
- (BOOL)checkExistenceOfKey:(unsigned long long)a0 outExists:(BOOL *)a1 error:(id *)a2;
- (id)readDataForKey:(unsigned long long)a0 withError:(id *)a1;

@end
