@interface _LSMDocMetaDBConnection : NSObject {
    struct sqlite3 { } *_database;
}

+ (id)connectionWithURL:(id)a0;

- (void)dealloc;
- (struct sqlite3 { } *)database;

@end
