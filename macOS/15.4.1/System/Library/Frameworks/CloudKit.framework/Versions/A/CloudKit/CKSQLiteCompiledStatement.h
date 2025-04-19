@class CKSQLiteTable, NSArray, CKSQLiteDatabase, NSMutableDictionary, NSDictionary, CKSQLiteCompiledStatementDecoder, NSMutableArray, CKSQLiteCompiledStatementSetup, NSPointerArray, NSNumber;

@interface CKSQLiteCompiledStatement : NSObject {
    CKSQLiteDatabase *_db;
    struct sqlite3_stmt { } *_handle;
    CKSQLiteCompiledStatementSetup *_setup;
    NSArray *_resultColumns;
    NSArray *_resultColumnTypes;
    NSPointerArray *_fetchedValues;
    NSMutableDictionary *_bindingTypesByVariable;
    NSDictionary *_searchValues;
    BOOL _needsSearchBinding;
    NSMutableArray *_boundObjects;
    CKSQLiteCompiledStatementDecoder *_decoder;
}

@property (readonly, weak, nonatomic) CKSQLiteTable *table;
@property (retain, nonatomic) id label;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;

+ (id)_statementForFetchingMinMax:(id)a0 forColumn:(id)a1 inTable:(id)a2;
+ (id)statementForCountingRowsInTable:(id)a0;
+ (id)statementForDeletingInTable:(id)a0;
+ (id)statementForFetchingAllTableNamesInDatabase:(id)a0;
+ (id)statementForFetchingColumns:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingMaximumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForFetchingMinimumValueForColumn:(id)a0 inTable:(id)a1;
+ (id)statementForInserting:(id)a0 inTable:(id)a1;
+ (id)statementForInserting:(id)a0 orUpdating:(id)a1 inTable:(id)a2;
+ (id)statementForSizingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForSummingColumn:(id)a0 inTable:(id)a1;
+ (id)statementForUpdatingColumns:(id)a0 inTable:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)step:(id *)a0;
- (id)compile;
- (id)_fillFetchedValues;
- (id)addBindingVariable:(id)a0 withAssociatedProperty:(id)a1;
- (id)bindValue:(id)a0 ofType:(unsigned int)a1 atIndex:(int)a2;
- (id)bindValueColumn:(id)a0 type:(unsigned int)a1 value:(id)a2;
- (id)boundObjects;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)doSearchValueBinding;
- (void)enumerateResultColumnsWithBlock:(id /* block */)a0;
- (id)fetchedColumns;
- (id)initWithDatabase:(id)a0 sql:(id)a1 resultColumns:(id)a2 resultColumnTypes:(id)a3;
- (id)initWithTable:(id)a0 sql:(id)a1 resultColumns:(id)a2 resultColumnTypes:(id)a3;
- (void)orderByProperty:(id)a0 ascending:(BOOL)a1;
- (id)propertyDecoder:(id *)a0;
- (void)resetAndClearBindings;
- (id)searchBindingsDescription;
- (id)setSearchPredicate:(id)a0 forProperties:(id)a1;
- (void)setSearchValues:(id)a0;
- (id)sqlValueForVariable:(id)a0;

@end
