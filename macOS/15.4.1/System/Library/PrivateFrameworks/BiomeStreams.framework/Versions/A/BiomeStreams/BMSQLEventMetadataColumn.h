@interface BMSQLEventMetadataColumn : BMSQLColumn {
    id /* block */ _setValueBlock;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 extractBlock:(id /* block */)a3 setValueBlock:(id /* block */)a4;
- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
