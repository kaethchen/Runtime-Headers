@class NSString;

@interface GraphAPIMoveMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end
