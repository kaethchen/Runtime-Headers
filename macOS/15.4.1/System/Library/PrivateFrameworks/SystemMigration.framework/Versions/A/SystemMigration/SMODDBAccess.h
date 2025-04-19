@class ODSession, ODNode, NSURL;

@interface SMODDBAccess : SMDBAccess {
    ODSession *_session;
    NSURL *_path;
    long long accessCount;
}

@property (retain) ODNode *node;

+ (id)sharedQueue;
+ (id)sharedDBToPathMap;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)replaceUserRecord:(id)a0 withRecord:(id)a1 attributes:(id)a2 password:(id)a3 options:(unsigned int)a4 error:(id *)a5;
- (id)recordTypes;
- (void)closeDatabase;
- (id)entriesAtPath:(id)a0;
- (BOOL)addMemberRecord:(id)a0 ofType:(id)a1 atPath:(id)a2;
- (long long)addValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (BOOL)createEntry:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)createEntry:(id)a0 atPath:(id)a1 mergeAttributes:(id)a2 error:(id *)a3;
- (BOOL)deleteEntryAtPath:(id)a0;
- (BOOL)enableSecureTokenForUser:(id)a0 withPassword:(id)a1 andDiskPassword:(id)a2 returningError:(id *)a3;
- (id)entryAtPath:(id)a0;
- (BOOL)entryExistsAtPath:(id)a0;
- (BOOL)establishCredentialsForSecureTokenWithName:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)insertValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (BOOL)openDatabaseForWriting:(BOOL)a0;
- (void)removeEmptyAttributes:(id)a0;
- (BOOL)removeValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (BOOL)removeValuesForKey:(id)a0 atPath:(id)a1;
- (BOOL)setPassword:(id)a0 forUser:(id)a1 error:(id *)a2;
- (BOOL)setRequirePasswordResetOnNextLoginForUser:(id)a0 error:(id *)a1;
- (BOOL)userIsASecureTokenHolder:(id)a0;
- (BOOL)validatePassword:(id)a0 againstSecureTokenForUser:(id)a1;

@end
