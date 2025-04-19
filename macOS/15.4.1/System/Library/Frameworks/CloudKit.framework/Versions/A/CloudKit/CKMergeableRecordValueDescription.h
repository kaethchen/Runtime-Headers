@class CKMergeableRecordValue, NSString;

@interface CKMergeableRecordValueDescription : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) CKMergeableRecordValue *mergeableRecordValue;
@property (readonly, nonatomic) BOOL shortDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0 includeDeltaContents:(BOOL)a1;
- (id)initWithMergeableRecordValue:(id)a0 shortDescription:(BOOL)a1;

@end
