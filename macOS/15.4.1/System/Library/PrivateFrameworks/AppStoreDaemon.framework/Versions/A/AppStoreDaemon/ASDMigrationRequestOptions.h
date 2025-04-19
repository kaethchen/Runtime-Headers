@interface ASDMigrationRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) unsigned long long migrationType;

- (id)init;
- (id)initWithMigrationType:(unsigned long long)a0;

@end
