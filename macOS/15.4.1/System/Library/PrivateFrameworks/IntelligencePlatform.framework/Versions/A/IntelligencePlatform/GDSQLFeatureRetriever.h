@class _PASSqliteDatabase;

@interface GDSQLFeatureRetriever : NSObject {
    _PASSqliteDatabase *_db;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)featureForKey:(id)a0 error:(id *)a1;
- (id)featureKeysWithError:(id *)a0;

@end
