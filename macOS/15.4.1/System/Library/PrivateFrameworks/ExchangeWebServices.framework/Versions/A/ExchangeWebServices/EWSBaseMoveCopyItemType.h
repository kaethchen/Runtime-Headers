@class NSArray, EWSTargetFolderIdType;

@interface EWSBaseMoveCopyItemType : EWSBaseRequestType

@property (retain, nonatomic) EWSTargetFolderIdType *ToFolderId;
@property (copy, nonatomic) NSArray *ItemIds;

+ (id)definition;

- (void).cxx_destruct;

@end
