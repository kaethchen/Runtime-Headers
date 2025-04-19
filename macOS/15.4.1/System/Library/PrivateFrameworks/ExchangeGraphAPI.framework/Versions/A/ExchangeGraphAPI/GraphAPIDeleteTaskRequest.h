@class NSString;

@interface GraphAPIDeleteTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;

- (void).cxx_destruct;
- (id)resource;
- (id)httpMethod;

@end
