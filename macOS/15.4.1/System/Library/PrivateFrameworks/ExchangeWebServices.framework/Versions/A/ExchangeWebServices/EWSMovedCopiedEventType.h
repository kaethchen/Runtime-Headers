@class EWSFolderIdType;

@interface EWSMovedCopiedEventType : EWSBaseObjectChangedEventType

@property (retain, nonatomic) id OldItemOrFolderId;
@property (retain, nonatomic) EWSFolderIdType *OldParentFolderId;

+ (id)definition;

- (void).cxx_destruct;

@end
