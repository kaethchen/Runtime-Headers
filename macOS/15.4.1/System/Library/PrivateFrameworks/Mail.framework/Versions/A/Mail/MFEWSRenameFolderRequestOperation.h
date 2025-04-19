@class NSString, MFEWSGetFolderResponseOperation;

@interface MFEWSRenameFolderRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSString *folderIdString;
@property (readonly, copy, nonatomic) NSString *folderName;
@property (readonly, nonatomic) MFEWSGetFolderResponseOperation *changeKeysResponse;

- (void).cxx_destruct;
- (id)activityString;
- (BOOL)isFolderRequest;
- (id)initWithEWSFolderIdString:(id)a0 name:(id)a1 gateway:(id)a2;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
