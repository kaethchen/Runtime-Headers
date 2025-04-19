@class ASUSQLiteConnection;

@interface ASUSQLiteSchema : NSObject {
    ASUSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (BOOL)tableExists:(id)a0;
- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;

@end
