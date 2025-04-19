@class NSString, NSArray;

@interface GraphAPIGetMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;
@property (copy, nonatomic) NSString *attachmentId;
@property (nonatomic) BOOL shouldRetrieveMIMEContent;

- (void).cxx_destruct;
- (id)resource;

@end
