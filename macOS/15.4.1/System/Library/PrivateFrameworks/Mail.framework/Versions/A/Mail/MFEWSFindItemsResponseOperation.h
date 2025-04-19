@class NSArray, NSDictionary, EWSFindItemResponseType;

@interface MFEWSFindItemsResponseOperation : MFEWSResponseOperation

@property (copy, nonatomic) NSArray *EWSFolderIds;
@property (copy, nonatomic) NSDictionary *rootFoldersByEWSFolderId;
@property (retain) EWSFindItemResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;
- (id)rootFolderForEWSFolderId:(id)a0;

@end
