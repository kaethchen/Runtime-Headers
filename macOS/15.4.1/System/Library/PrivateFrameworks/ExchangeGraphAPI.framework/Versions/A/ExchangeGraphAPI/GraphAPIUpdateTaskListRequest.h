@class NSString;

@interface GraphAPIUpdateTaskListRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end
