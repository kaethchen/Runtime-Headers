@class SGSqliteDatabase;

@interface SGSqliteReadTransaction : NSObject

@property (readonly, nonatomic) SGSqliteDatabase *db;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;

@end
