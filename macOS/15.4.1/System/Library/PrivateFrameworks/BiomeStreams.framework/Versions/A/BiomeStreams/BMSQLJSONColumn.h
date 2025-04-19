@interface BMSQLJSONColumn : BMSQLColumn {
    id /* block */ _jsonExtractBlock;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 requestOnly:(BOOL)a1 extractBlock:(id /* block */)a2;
- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
