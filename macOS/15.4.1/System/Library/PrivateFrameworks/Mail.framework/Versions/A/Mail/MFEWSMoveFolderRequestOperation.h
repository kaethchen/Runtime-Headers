@class NSString, NSArray, MFEWSGetFolderResponseOperation;

@interface MFEWSMoveFolderRequestOperation : MFEWSRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MFEWSGetFolderResponseOperation *changeKeysResponse;
@property (readonly, copy, nonatomic) NSString *destinationEWSFolderIdString;
@property (readonly, copy, nonatomic) NSArray *originEWSFolderIdStrings;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activityString;
- (BOOL)isFolderRequest;
- (void)_ewsMoveFolderRequestCommonInitWithEWSFolderIdString:(id)a0 originEWSFolderIdStrings:(id)a1 gateway:(id)a2;
- (id)initWithEWSFolderIdString:(id)a0 originEWSFolderIdStrings:(id)a1 gateway:(id)a2;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;
- (void)setupOfflineResponse;

@end
