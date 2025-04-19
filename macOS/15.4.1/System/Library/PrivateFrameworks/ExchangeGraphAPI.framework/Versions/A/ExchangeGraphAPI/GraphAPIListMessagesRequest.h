@class NSString;

@interface GraphAPIListMessagesRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *searchQuery;

- (void).cxx_destruct;
- (id)resource;

@end
