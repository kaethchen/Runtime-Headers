@class NSError, AMSSQLiteConnection;

@interface AMSSQLiteSchemaMigration : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) NSError *error;
@property (readonly) BOOL success;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeStatement:(id)a0 canFailMigration:(BOOL)a1 bindings:(id /* block */)a2 error:(id *)a3;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeStatement:(id)a0;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;

@end
