@class PPSSQLiteDatabase, PPSSQLiteQueryDescriptor;

@interface PPSSQLiteQuery : NSObject

@property (readonly) PPSSQLiteDatabase *database;
@property (readonly, copy) PPSSQLiteQueryDescriptor *descriptor;

+ (id)queryWithDatabase:(id)a0 entity:(id)a1 predicate:(id)a2;
+ (id)queryWithDatabase:(id)a0 entity:(id)a1 predicate:(id)a2 groupByProperties:(id)a3 orderByProperties:(id)a4 orderByDirections:(id)a5 limitCount:(unsigned long long)a6 offsetCount:(unsigned long long)a7;

- (void).cxx_destruct;
- (void)bindToSelectStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (BOOL)enumerateProperties:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)initWithDatabase:(id)a0 descriptor:(id)a1;
- (id)columnNamesForProperties:(id)a0;
- (id)selectSQLWithProperties:(id)a0;

@end
