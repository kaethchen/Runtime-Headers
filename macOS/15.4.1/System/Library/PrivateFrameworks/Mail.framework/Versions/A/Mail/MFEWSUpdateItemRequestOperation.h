@class MFEWSSuppressReadReceiptsRequestOperation, NSArray, NSDictionary, MFEWSGetItemsResponseOperation;

@interface MFEWSUpdateItemRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse;
@property (readonly, nonatomic) MFEWSSuppressReadReceiptsRequestOperation *suppressReadReceiptsRequest;
@property (readonly, copy, nonatomic) NSArray *itemsPriorToUpdate;
@property (readonly, copy, nonatomic) NSArray *EWSItemIds;
@property (readonly, copy, nonatomic) NSDictionary *flags;
@property (readonly, nonatomic) char messageType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activityString;
- (void)_ewsUpdateItemRequestOperationCommonInitWithEWSItemIds:(id)a0 messageType:(char)a1 flags:(id)a2 errorHandler:(id)a3;
- (id)initWithEWSItemIds:(id)a0 messageType:(char)a1 flags:(id)a2 gateway:(id)a3 errorHandler:(id)a4;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (void)setupOfflineResponse;

@end
