@class NSArray, EWSTargetFolderIdType;

@interface EWSBaseMoveCopyFolderType : EWSBaseRequestType

@property (retain, nonatomic) EWSTargetFolderIdType *ToFolderId;
@property (copy, nonatomic) NSArray *FolderIds;

+ (id)definition;

- (void).cxx_destruct;

@end
