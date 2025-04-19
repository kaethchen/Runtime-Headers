@class NSString, NSMutableString, NSPredicate, NSNumber;

@interface CKSQLiteCompiledStatementSetup : NSObject {
    NSString *_sql;
    NSPredicate *_wherePredicate;
    NSMutableString *_orderBySQL;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void).cxx_destruct;

@end
