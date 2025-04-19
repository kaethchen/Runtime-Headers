@class EWSPermissionSetType;

@interface EWSContactsFolderType : EWSBaseFolderType

@property (retain, nonatomic) EWSPermissionSetType *PermissionSet;

+ (id)definition;

- (void).cxx_destruct;

@end
