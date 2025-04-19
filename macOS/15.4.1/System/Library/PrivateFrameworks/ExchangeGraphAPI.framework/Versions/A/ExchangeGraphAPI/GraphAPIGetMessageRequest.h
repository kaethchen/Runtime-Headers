@class NSString;

@interface GraphAPIGetMessageRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;

- (void).cxx_destruct;
- (id)resource;

@end
