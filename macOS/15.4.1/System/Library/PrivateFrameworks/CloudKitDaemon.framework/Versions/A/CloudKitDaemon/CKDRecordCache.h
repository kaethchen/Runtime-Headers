@class CKDRecordCacheTable;

@interface CKDRecordCache : CKSQLiteContainerAttributedTableGroup {
    CKDRecordCacheTable *_rc;
}

+ (id)recordCacheForContainer:(id)a0;
+ (id)recordCacheInDatabase:(id)a0 withContainer:(id)a1;
+ (id)recordCacheWithPath:(id)a0 forContainer:(id)a1;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)createTables:(id *)a0;

@end
