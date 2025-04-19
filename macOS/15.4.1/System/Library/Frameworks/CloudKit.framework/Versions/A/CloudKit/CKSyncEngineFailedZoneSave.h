@class NSError, CKRecordZone, NSString;

@interface CKSyncEngineFailedZoneSave : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithZone:(id)a0 error:(id)a1;

@end
