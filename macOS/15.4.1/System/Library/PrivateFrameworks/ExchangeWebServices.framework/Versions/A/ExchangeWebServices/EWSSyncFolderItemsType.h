@class NSArray, EWSItemResponseShapeType, NSString, EWSTargetFolderIdType;

@interface EWSSyncFolderItemsType : EWSBaseRequestType

@property (retain, nonatomic) EWSItemResponseShapeType *ItemShape;
@property (retain, nonatomic) EWSTargetFolderIdType *SyncFolderId;
@property (copy, nonatomic) NSArray *Ignore;
@property (copy, nonatomic) NSString *SyncState;
@property (nonatomic) long long MaxChangesReturned;

+ (id)definition;

- (void).cxx_destruct;

@end
