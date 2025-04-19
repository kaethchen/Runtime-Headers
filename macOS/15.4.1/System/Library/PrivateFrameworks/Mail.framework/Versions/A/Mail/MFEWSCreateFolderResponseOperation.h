@class NSString, EWSCreateFolderResponseType;

@interface MFEWSCreateFolderResponseOperation : MFEWSResponseOperation

@property (copy) NSString *createdFolderId;
@property (retain) EWSCreateFolderResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
