@class NSString;

@interface GraphAPIGetTaskDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (void).cxx_destruct;
- (id)resource;

@end
