@class NSString, MFEWSCreateFolderResponseOperation;

@interface MFEWSCreateFolderRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *offlineCreatedEWSFolderIdString;
@property (readonly, copy, nonatomic) NSString *parentEWSFolderIdString;
@property (readonly, copy, nonatomic) NSString *folderName;
@property (readonly, nonatomic) int mailboxType;
@property (retain, nonatomic) MFEWSCreateFolderResponseOperation *responseOperation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)activityString;
- (BOOL)isFolderRequest;
- (void)_createdFolderIdString:(id)a0 didChangeForOperation:(id)a1;
- (void)_ewsCreateFolderRequestOperationCommonInitWithParentFolderIdString:(id)a0 name:(id)a1 mailboxType:(int)a2;
- (id)copyWithUpdatedNameCount:(unsigned long long)a0;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)initWithParentEWSFolderIdString:(id)a0 name:(id)a1 mailboxType:(int)a2 gateway:(id)a3;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (void)setupOfflineResponse;

@end
