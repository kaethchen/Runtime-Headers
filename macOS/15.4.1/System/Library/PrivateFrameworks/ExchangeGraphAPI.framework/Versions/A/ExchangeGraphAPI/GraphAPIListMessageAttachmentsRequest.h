@class NSString, NSArray;

@interface GraphAPIListMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;

- (void).cxx_destruct;
- (id)resource;

@end
