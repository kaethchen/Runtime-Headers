@class NSError, CKRecord, NSString;

@interface CKSyncEngineFailedRecordSave : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithRecord:(id)a0 error:(id)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;

@end
