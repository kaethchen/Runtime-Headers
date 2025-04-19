@class EWSPermissionSetType;

@interface EWSFolderType : EWSBaseFolderType

@property (retain, nonatomic) EWSPermissionSetType *PermissionSet;
@property (nonatomic) long long UnreadCount;
@property (nonatomic) BOOL UnreadCountSpecified;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
