@class NSMutableDictionary, KHDBPreparedSql, KHDBKCanceler;

@interface KHDBResultSet : NSObject {
    KHDBPreparedSql *_preparedSql;
    NSMutableDictionary *_columnNameToIndexMap;
    KHDBKCanceler *_postponer;
}

@property (retain, nonatomic) KHDBKCanceler *canceler;
@property (nonatomic) double queryStartTime;
@property (nonatomic) double queryEndTime;

+ (void)initialize;
+ (id)numberWithLongLong:(long long)a0;
+ (id)resultSetWithPreparedSql:(id)a0;
+ (id)resultSetWithPreparedSql:(id)a0 canceler:(id)a1;

- (void)dealloc;
- (id)description;
- (void)close;
- (id)query;
- (BOOL)next;
- (BOOL)canceled;
- (id)dataForColumnIndex:(long long)a0;
- (id)dateForColumnIndex:(long long)a0;
- (double)doubleForColumnIndex:(long long)a0;
- (long long)intForColumnIndex:(long long)a0;
- (id)numberForColumnIndex:(long long)a0;
- (id)stringForColumnIndex:(long long)a0;
- (BOOL)boolForColumn:(id)a0;
- (BOOL)boolForColumnIndex:(long long)a0;
- (long long)columnIndexForName:(id)a0;
- (id)columnNameToIndexMap;
- (id)dataForColumn:(id)a0;
- (id)dateForColumn:(id)a0;
- (double)doubleForColumn:(id)a0;
- (long long)intForColumn:(id)a0;
- (long long)longForColumn:(id)a0;
- (long long)longForColumnIndex:(long long)a0;
- (id)stringForColumn:(id)a0;
- (char *)bytesForColumn:(id)a0;
- (void)setPreparedSql:(id)a0;
- (char *)bytesForColumnIndex:(long long)a0;
- (id)dataForColumnIndexNumber:(id)a0;
- (id)dateForColumnIndexNumber:(id)a0;
- (id)doubleNumberForColumnIndex:(long long)a0;
- (id)intNumberForColumnIndex:(long long)a0;
- (long long)longLongForColumn:(id)a0;
- (long long)longLongForColumnIndex:(long long)a0;
- (BOOL)nullForColumn:(id)a0;
- (BOOL)nullForColumnIndex:(long long)a0;
- (id)numberForColumn:(id)a0;
- (id)numberForColumnIndexNumber:(id)a0;
- (void)postponeQuery;
- (BOOL)postponed;
- (id)preparedSql;
- (void)setupColumnNames;
- (id)stringForColumnIndexNumber:(id)a0;
- (double)timeIntervalForColumn:(id)a0;
- (double)timeIntervalForColumnIndex:(long long)a0;

@end
