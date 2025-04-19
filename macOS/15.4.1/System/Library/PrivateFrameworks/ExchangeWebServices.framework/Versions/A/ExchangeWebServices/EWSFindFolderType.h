@class NSArray, EWSBasePagingType, EWSFolderResponseShapeType, EWSRestrictionType;

@interface EWSFindFolderType : EWSBaseRequestType

@property (retain, nonatomic) EWSFolderResponseShapeType *FolderShape;
@property (retain, nonatomic) EWSBasePagingType *Paging;
@property (retain, nonatomic) EWSRestrictionType *Restriction;
@property (copy, nonatomic) NSArray *ParentFolderIds;
@property (nonatomic) long long Traversal;

+ (id)definition;

- (void).cxx_destruct;

@end
