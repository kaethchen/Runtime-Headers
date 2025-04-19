@class NSString, CKRecordZoneID;

@interface CKSyncEngineFetchedZoneDeletion : NSObject <CKPropertiesDescription>

@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) long long reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithZoneID:(id)a0 reason:(long long)a1;

@end
