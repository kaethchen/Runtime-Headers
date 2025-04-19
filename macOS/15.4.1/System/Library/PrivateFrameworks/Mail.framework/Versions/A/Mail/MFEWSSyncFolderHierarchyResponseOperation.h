@class EWSSyncFolderHierarchyResponseType;

@interface MFEWSSyncFolderHierarchyResponseOperation : MFEWSResponseOperation

@property (copy, nonatomic) id /* block */ createBlock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (retain) EWSSyncFolderHierarchyResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
