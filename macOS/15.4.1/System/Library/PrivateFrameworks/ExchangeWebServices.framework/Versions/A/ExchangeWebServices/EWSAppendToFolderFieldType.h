@class EWSFolderType;

@interface EWSAppendToFolderFieldType : EWSFolderChangeDescriptionType

@property (retain, nonatomic) EWSFolderType *Folder;

+ (id)definition;

- (void).cxx_destruct;

@end
