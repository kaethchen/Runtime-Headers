@class NSArray, MFEWSGetItemDataResponseOperation;

@interface MFEWSGetItemDataRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSArray *itemIdTypes;
@property (retain, nonatomic) MFEWSGetItemDataResponseOperation *responseOperation;

- (id)description;
- (void).cxx_destruct;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)initWithItemIdTypes:(id)a0 dataHandler:(id /* block */)a1 gateway:(id)a2 errorHandler:(id)a3;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
