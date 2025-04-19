@interface PSIStatement : NSObject

@property (readonly) struct sqlite3_stmt { } *stmt;

- (void)dealloc;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (double)doubleAtColumn:(unsigned long long)a0;
- (void)finalizze;
- (id)initWithSQLite3Stmt:(struct sqlite3_stmt { } *)a0;
- (long long)int64AtColumn:(unsigned long long)a0;
- (id)textAtColumn:(unsigned long long)a0;

@end
