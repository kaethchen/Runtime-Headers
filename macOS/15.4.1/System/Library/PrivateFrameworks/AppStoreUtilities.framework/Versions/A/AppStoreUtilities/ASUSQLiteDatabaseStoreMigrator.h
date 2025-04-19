@class NSArray, ASUSQLiteConnection;

@interface ASUSQLiteDatabaseStoreMigrator : NSObject {
    ASUSQLiteConnection *_connection;
    NSArray *_tableNames;
}

@property (readonly) BOOL success;
@property (readonly) ASUSQLiteConnection *connection;

- (void).cxx_destruct;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (void)executeStatement:(id)a0;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeOptionalQuery:(id)a0 withResults:(id /* block */)a1;
- (id)initWithConnection:(id)a0 tableNames:(id)a1;

@end
