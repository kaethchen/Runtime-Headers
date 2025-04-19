@class NSNumber, NSData, NSString;

@interface CCMetaContentRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *instanceHash;
@property (readonly, nonatomic) NSData *metaContent;
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
- (BOOL)isEqualToItemRecord:(id)a0;

@end
