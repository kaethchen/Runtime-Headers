@class EWSFolderResponseShapeType, NSString, EWSTargetFolderIdType;

@interface EWSSyncFolderHierarchyType : EWSBaseRequestType

@property (retain, nonatomic) EWSFolderResponseShapeType *FolderShape;
@property (retain, nonatomic) EWSTargetFolderIdType *SyncFolderId;
@property (copy, nonatomic) NSString *SyncState;

+ (id)definition;

- (void).cxx_destruct;

@end
