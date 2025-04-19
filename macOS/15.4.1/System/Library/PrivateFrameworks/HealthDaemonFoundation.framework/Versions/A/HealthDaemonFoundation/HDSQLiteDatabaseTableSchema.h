@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *indices;
@property (retain, nonatomic) NSSet *triggers;
@property (copy, nonatomic) NSString *createTableSchema;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
