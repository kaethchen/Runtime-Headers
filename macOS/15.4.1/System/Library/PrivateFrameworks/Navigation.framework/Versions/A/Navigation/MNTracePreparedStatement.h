@interface MNTracePreparedStatement : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_preparedStatement;
}

@property (readonly, nonatomic) struct sqlite3 { } *db;
@property (readonly, nonatomic) struct sqlite3_stmt { } *rawStatement;

+ (id)preparedStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;

- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (id)init;
- (BOOL)reset;
- (BOOL)step;
- (BOOL)execute;
- (BOOL)clearBindings;
- (BOOL)stepRow;
- (unsigned long long)_bindParameterIndexWithName:(id)a0;
- (BOOL)_prepareStatementForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;
- (void)bind:(unsigned long long)a0 data:(id)a1;
- (void)bind:(unsigned long long)a0 double:(double)a1;
- (void)bind:(unsigned long long)a0 int:(int)a1;
- (void)bind:(unsigned long long)a0 string:(id)a1;
- (void)bindNull:(unsigned long long)a0;
- (void)bindNullParameter:(id)a0;
- (void)bindParameter:(id)a0 data:(id)a1;
- (void)bindParameter:(id)a0 double:(double)a1;
- (void)bindParameter:(id)a0 int:(int)a1;
- (void)bindParameter:(id)a0 string:(id)a1;
- (id)columnData:(unsigned long long)a0;
- (double)columnDouble:(unsigned long long)a0;
- (int)columnInt:(unsigned long long)a0;
- (id)columnObjects:(unsigned long long)a0 ofClasses:(id)a1;
- (id)columnObjectsOld:(unsigned long long)a0 ofClasses:(id)a1;
- (id)columnString:(unsigned long long)a0;
- (id)initForTrace:(id)a0 statement:(id)a1 outError:(out id *)a2;

@end
