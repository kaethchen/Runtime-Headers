@class NSString, MFEWSCreateItemResponseOperation;

@interface MFEWSCreateItemRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *EWSFolderIdString;
@property (readonly, nonatomic) char messageType;
@property (readonly, nonatomic) long long disposition;
@property (retain) NSString *offlineCreatedEWSItemIdString;
@property BOOL wroteOfflineData;
@property (retain, nonatomic) MFEWSCreateItemResponseOperation *responseOperation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)activityString;
- (void)_ewsCreateItemRequestOperationCommonInitWithFolderIdString:(id)a0 messageType:(char)a1 disposition:(long long)a2;
- (void)_itemIdString:(id)a0 didChangeForResponseOperation:(id)a1;
- (id)initWithFolderIdString:(id)a0 messageType:(char)a1 disposition:(long long)a2 gateway:(id)a3 errorHandler:(id)a4;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;

@end
