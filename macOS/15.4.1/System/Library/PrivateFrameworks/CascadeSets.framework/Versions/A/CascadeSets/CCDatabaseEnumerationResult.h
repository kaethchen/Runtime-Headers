@class CCDatabaseCommand, NSArray, CCSQLitePreparedStatement, CCSQLiteDatabase, NSError;

@interface CCDatabaseEnumerationResult : NSObject

@property (readonly, nonatomic) NSArray *peekedNext;
@property (readonly, nonatomic) CCSQLitePreparedStatement *statement;
@property (readonly, nonatomic) int column_count;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CCSQLiteDatabase *database;
@property (readonly, nonatomic) CCDatabaseCommand *command;

+ (id)emptyResult;

- (id)init;
- (void).cxx_destruct;
- (id)peek;
- (id)next;
- (id)_next;
- (id)initWithStatement:(id)a0 database:(id)a1 command:(id)a2 error:(id)a3;

@end
