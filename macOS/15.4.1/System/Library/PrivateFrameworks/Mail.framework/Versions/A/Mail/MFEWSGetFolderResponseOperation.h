@class NSArray, EWSGetFolderResponseType;

@interface MFEWSGetFolderResponseOperation : MFEWSResponseOperation

@property (copy) NSArray *EWSFolderIdsRequested;
@property (copy) NSArray *EWSFolders;
@property (retain) EWSGetFolderResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
