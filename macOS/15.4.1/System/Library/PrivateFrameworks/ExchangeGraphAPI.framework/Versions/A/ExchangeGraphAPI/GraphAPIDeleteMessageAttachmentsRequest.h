@class NSString, NSArray;

@interface GraphAPIDeleteMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;
@property (copy, nonatomic) NSString *attachmentId;

- (void).cxx_destruct;
- (id)resource;
- (id)httpMethod;

@end
