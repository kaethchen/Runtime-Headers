@class NSNumber, NSString;

@interface CCInstanceRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *sourceItemIdHash;
@property (readonly, nonatomic) NSNumber *provenanceRowId;
@property (readonly, nonatomic) NSNumber *modified;
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
