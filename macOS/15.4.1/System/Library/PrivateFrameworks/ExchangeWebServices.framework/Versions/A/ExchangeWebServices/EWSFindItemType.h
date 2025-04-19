@class NSArray, EWSItemResponseShapeType, EWSBasePagingType, EWSRestrictionType, EWSIndexedPageViewType;

@interface EWSFindItemType : EWSBaseRequestType

@property (retain, nonatomic) EWSItemResponseShapeType *ItemShape;
@property (retain, nonatomic) EWSBasePagingType *Paging;
@property (retain, nonatomic) EWSRestrictionType *Restriction;
@property (copy, nonatomic) NSArray *SortOrder;
@property (copy, nonatomic) NSArray *ParentFolderIds;
@property (nonatomic) long long Traversal;
@property (retain, nonatomic) EWSIndexedPageViewType *IndexedPageItemView;
@property (nonatomic) BOOL IndexedPageItemViewSpecified;

+ (id)definition;

- (void).cxx_destruct;

@end
