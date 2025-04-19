@class NSString, NSDictionary, NSData, MCMessage, MFEWSGetItemsResponseOperation;

@interface MFEWSCreateMessageRequestOperation : MFEWSCreateItemRequestOperation <NSCoding>

@property (readonly, nonatomic) MCMessage *message;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long flags;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSDictionary *recipientsByHeaderKey;
@property (readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse;
@property (copy, nonatomic) NSString *existingItemIdString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_ewsCreateMessageRequestOperationCommonInitWithMessage:(id)a0 data:(id)a1 flags:(long long)a2 existingItemIdString:(id)a3 sender:(id)a4 recipientsByHeaderKey:(id)a5;
- (id)initWithFolderIdString:(id)a0 messageType:(char)a1 disposition:(long long)a2 gateway:(id)a3 errorHandler:(id)a4;
- (id)initWithMessage:(id)a0 data:(id)a1 folderIdString:(id)a2 messageType:(char)a3 flags:(long long)a4 existingItemIdString:(id)a5 sender:(id)a6 recipientsByHeaderKey:(id)a7 disposition:(long long)a8 gateway:(id)a9 errorHandler:(id)a10;
- (id)prepareRequest;

@end
