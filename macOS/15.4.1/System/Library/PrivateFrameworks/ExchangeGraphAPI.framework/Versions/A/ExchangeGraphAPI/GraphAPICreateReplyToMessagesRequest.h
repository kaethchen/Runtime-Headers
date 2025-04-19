@class NSString, NSDictionary, NSData;

@interface GraphAPICreateReplyToMessagesRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSData *mimeData;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end
