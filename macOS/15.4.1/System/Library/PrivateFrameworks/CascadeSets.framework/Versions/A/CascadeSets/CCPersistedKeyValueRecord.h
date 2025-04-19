@class NSString, NSNumber, NSData;

@interface CCPersistedKeyValueRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSNumber *integerValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToMetadataRecord:(id)a0;

@end
