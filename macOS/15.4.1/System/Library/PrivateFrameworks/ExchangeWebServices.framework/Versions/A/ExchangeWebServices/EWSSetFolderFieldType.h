@class EWSFolderType;

@interface EWSSetFolderFieldType : EWSFolderChangeDescriptionType

@property (retain, nonatomic) EWSFolderType *Folder;

+ (id)definition;

- (void).cxx_destruct;

@end
