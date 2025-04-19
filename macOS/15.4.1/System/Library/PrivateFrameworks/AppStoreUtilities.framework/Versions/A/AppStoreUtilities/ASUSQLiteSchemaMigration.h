@class NSError, ASUSQLiteConnection;

@interface ASUSQLiteSchemaMigration : NSObject {
    ASUSQLiteConnection *_connection;
}

@property (readonly) NSError *error;
@property (readonly) BOOL success;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeStatement:(id)a0;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;

@end
