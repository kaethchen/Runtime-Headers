@class NSString, MFEWSGetItemsResponseOperation, MFEWSCreateEventReplyResponseOperation;

@interface MFEWSCreateEventReplyRequestOperation : MFEWSCreateItemRequestOperation

@property (readonly, nonatomic) char messageResponseType;
@property (readonly, copy, nonatomic) NSString *messageMeetingItemIdString;
@property (readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse;
@property (retain, nonatomic) MFEWSCreateEventReplyResponseOperation *responseOperation;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:(id)a0 responseType:(char)a1;
- (id)initWithFolderIdString:(id)a0 messageType:(char)a1 disposition:(long long)a2 gateway:(id)a3 errorHandler:(id)a4;
- (id)initWithItemIdString:(id)a0 folderIdString:(id)a1 messageType:(char)a2 responseType:(char)a3 disposition:(long long)a4 gateway:(id)a5 errorHandler:(id)a6;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
