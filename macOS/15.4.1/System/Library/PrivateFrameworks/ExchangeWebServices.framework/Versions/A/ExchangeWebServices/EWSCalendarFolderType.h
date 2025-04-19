@class EWSCalendarPermissionSetType;

@interface EWSCalendarFolderType : EWSBaseFolderType

@property (retain, nonatomic) EWSCalendarPermissionSetType *PermissionSet;

+ (id)definition;

- (void).cxx_destruct;

@end
