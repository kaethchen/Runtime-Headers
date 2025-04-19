@class EWSFolderResponseShapeType, NSArray;

@interface EWSGetFolderType : EWSBaseRequestType

@property (retain, nonatomic) EWSFolderResponseShapeType *FolderShape;
@property (copy, nonatomic) NSArray *FolderIds;

+ (id)definition;

- (void).cxx_destruct;

@end
