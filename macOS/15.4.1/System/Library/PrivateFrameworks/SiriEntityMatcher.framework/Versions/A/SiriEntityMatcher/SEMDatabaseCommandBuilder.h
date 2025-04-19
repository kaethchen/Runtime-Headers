@class NSString, SEMSQLCommandCriterion;

@interface SEMDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) SEMSQLCommandCriterion *criterion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;

@end
