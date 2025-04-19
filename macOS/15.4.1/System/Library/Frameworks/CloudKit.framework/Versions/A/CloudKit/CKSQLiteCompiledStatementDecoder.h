@class CKSQLiteCompiledStatement, NSMutableDictionary;

@interface CKSQLiteCompiledStatementDecoder : NSCoder {
    CKSQLiteCompiledStatement *_statement;
    NSMutableDictionary *_propertyValues;
}

- (void).cxx_destruct;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)ck_isDecodingForCKSQLiteDatabase;
- (id)fillProperties;
- (id)initWithStatement:(id)a0;

@end
