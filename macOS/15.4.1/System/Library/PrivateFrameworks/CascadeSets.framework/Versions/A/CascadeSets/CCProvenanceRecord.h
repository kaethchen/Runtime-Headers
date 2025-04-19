@class NSNumber, NSString;

@interface CCProvenanceRecord : NSObject <CCDatabaseRecord>

@property (readonly, nonatomic) NSNumber *provenanceRowId;
@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *instanceHash;
@property (readonly, nonatomic) NSNumber *contentSequenceNumber;
@property (readonly, nonatomic) NSNumber *contentSequenceNumberEndOfRun;
@property (readonly, nonatomic) NSNumber *contentState;
@property (readonly, nonatomic) NSNumber *metaContentSequenceNumber;
@property (readonly, nonatomic) NSNumber *metaContentSequenceNumberEndOfRun;
@property (readonly, nonatomic) NSNumber *metaContentState;
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
