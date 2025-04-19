@class NSString, NSArray;

@interface ASUSQLiteDatabaseStoreDescriptor : NSObject

@property (readonly) NSString *schemaName;
@property (readonly, copy) NSArray *tableNames;
@property (readonly) Class sessionClass;
@property (readonly) Class transactionClass;

- (void).cxx_destruct;
- (id)initWithSchemaName:(id)a0 tableNames:(id)a1 sessionClass:(Class)a2 transactionClass:(Class)a3;

@end
