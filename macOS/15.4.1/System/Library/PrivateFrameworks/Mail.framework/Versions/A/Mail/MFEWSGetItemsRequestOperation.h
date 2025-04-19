@class NSArray, MFEWSGetItemsResponseOperation;

@interface MFEWSGetItemsRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSArray *additionalProperties;
@property (readonly, copy, nonatomic) NSArray *EWSItemIds;
@property (retain, nonatomic) MFEWSGetItemsResponseOperation *responseOperation;

- (id)description;
- (void).cxx_destruct;
- (id)activityString;
- (id)initWithEWSItemIds:(id)a0 additionalProperties:(id)a1 gateway:(id)a2 errorHandler:(id)a3;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
