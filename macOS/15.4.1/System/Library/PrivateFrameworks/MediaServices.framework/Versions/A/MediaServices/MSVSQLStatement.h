@class _MSVSQLConnection, MSVSQLDatabaseTransaction;

@interface MSVSQLStatement : NSObject {
    struct sqlite3_stmt { } *_statementHandle;
    _MSVSQLConnection *_connection;
    MSVSQLDatabaseTransaction *_implicitTransaction;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)reset;
- (void)bindDataValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindBoolValue:(BOOL)a0 toParameterNamed:(id)a1;
- (void)bindDateValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindBoolValue:(BOOL)a0 toParameterAtIndex:(long long)a1;
- (void)bindDataValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindDateValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindDoubleValue:(double)a0 toParameterAtIndex:(long long)a1;
- (void)bindDoubleValue:(double)a0 toParameterNamed:(id)a1;
- (void)bindFloatValue:(float)a0 toParameterAtIndex:(long long)a1;
- (void)bindFloatValue:(float)a0 toParameterNamed:(id)a1;
- (void)bindFunctionContext:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindFunctionContext:(id)a0 toParameterNamed:(id)a1;
- (void)bindInt64Value:(long long)a0 toParameterAtIndex:(long long)a1;
- (void)bindInt64Value:(long long)a0 toParameterNamed:(id)a1;
- (BOOL)bindJSONValue:(id)a0 toParameterAtIndex:(long long)a1 error:(id *)a2;
- (BOOL)bindJSONValue:(id)a0 toParameterNamed:(id)a1 error:(id *)a2;
- (void)bindNullValueToParameterAtIndex:(long long)a0;
- (void)bindNullValueToParameterNamed:(id)a0;
- (void)bindStringValue:(id)a0 toParameterAtIndex:(long long)a1;
- (void)bindStringValue:(id)a0 toParameterNamed:(id)a1;
- (void)bindUInt64Value:(unsigned long long)a0 toParameterAtIndex:(long long)a1;
- (void)bindUInt64Value:(unsigned long long)a0 toParameterNamed:(id)a1;

@end
