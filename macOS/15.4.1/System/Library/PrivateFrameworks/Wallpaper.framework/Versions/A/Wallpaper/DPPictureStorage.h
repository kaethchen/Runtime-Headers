@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
}

- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)a0;
- (void)closeDatabase;
- (id)allEntries;
- (struct sqlite3 { } *)_openDatabaseAtPath:(id)a0 error:(id)a1;

@end
