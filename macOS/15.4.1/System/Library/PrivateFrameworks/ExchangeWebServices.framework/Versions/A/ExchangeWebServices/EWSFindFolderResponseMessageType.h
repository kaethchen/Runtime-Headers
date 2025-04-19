@class EWSFindFolderParentType;

@interface EWSFindFolderResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSFindFolderParentType *RootFolder;

+ (id)definition;

- (void).cxx_destruct;

@end
