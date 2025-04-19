@class NSString, NSArray, BMSQLSchema;

@interface BMIndex : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) NSArray *fields;
@property (readonly, nonatomic) BMSQLSchema *schema;

+ (id)_indexTableSchemaWithName:(id)a0 fields:(id)a1;
+ (id)_viewNameWithStreamIdentifier:(id)a0 indexName:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)createTableSQL;
- (id)createViewSQL;
- (id)initWithName:(id)a0 fields:(id)a1 streamIdentifier:(id)a2;

@end
