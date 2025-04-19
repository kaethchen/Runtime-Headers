@class NSString;

@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *sql;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
