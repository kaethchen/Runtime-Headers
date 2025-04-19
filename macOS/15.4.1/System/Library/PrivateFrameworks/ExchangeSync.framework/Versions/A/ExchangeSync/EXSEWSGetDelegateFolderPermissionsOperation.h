@class NSString;

@interface EXSEWSGetDelegateFolderPermissionsOperation : EXSEWSOperation

@property (nonatomic) long long folderPermission;
@property (retain, nonatomic) NSString *emailAddress;

+ (id)log;
+ (long long)_getESEDelegateUserPermissionFromFolder:(id)a0;

- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
