@class NSString;

@interface SYDocumentWorkflowsDisabledDataStore : NSObject <SYDocumentWorkflowsDataStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_disabledRepositoryError;

- (id)fetchUserActivityWithRelatedUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)saveUserActivity:(id)a0 forRelatedUniqueIdentifier:(id)a1 sourceBundleIdentifier:(id)a2 error:(id *)a3;

@end
