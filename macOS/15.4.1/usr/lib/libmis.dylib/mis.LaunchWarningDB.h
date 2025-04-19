@interface mis.LaunchWarningDB : SQLDB

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
