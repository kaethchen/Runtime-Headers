@interface MFPersistenceDatabase_macOS : EDPersistenceDatabase

@property (nonatomic) BOOL haveSetDatabaseAttributes;

- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (BOOL)enforceDataProtection;
- (void)handleExceptionDuringDatabaseBlock:(id)a0;
- (id)openConnectionIsWriter:(BOOL)a0;
- (BOOL)performWithOptions:(unsigned long long)a0 caller:(id)a1 block:(id /* block */)a2;
- (void)_setDatabaseAttributes;

@end
