@class NSArray, EWSTargetFolderIdType;

@interface EWSCreateFolderType : EWSBaseRequestType

@property (retain, nonatomic) EWSTargetFolderIdType *ParentFolderId;
@property (copy, nonatomic) NSArray *Folders;

+ (id)definition;

- (void).cxx_destruct;

@end
