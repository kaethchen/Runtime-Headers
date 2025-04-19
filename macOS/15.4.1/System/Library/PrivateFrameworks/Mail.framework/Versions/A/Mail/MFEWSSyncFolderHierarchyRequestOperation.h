@class NSString, MFEWSSyncFolderHierarchyResponseOperation;

@interface MFEWSSyncFolderHierarchyRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSString *syncState;
@property (retain, nonatomic) MFEWSSyncFolderHierarchyResponseOperation *responseOperation;

- (void).cxx_destruct;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)initWithSyncState:(id)a0 createBlock:(id /* block */)a1 updateBlock:(id /* block */)a2 deleteBlock:(id /* block */)a3 gateway:(id)a4;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
