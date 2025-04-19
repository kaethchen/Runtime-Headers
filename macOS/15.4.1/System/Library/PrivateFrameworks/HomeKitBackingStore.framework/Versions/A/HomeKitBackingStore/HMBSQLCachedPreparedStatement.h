@interface HMBSQLCachedPreparedStatement : NSObject

@property (readonly, nonatomic) struct sqlite3_stmt { } *statement;

- (id)initWithStatement:(struct sqlite3_stmt { } *)a0;

@end
