@class NSString, CKSyncEngineSendChangesOptions;

@interface CKSyncEngineSendChangesContext : NSObject <CKPropertiesDescription>

@property (readonly) long long reason;
@property (readonly, copy) CKSyncEngineSendChangesOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithReason:(long long)a0 options:(id)a1;

@end
