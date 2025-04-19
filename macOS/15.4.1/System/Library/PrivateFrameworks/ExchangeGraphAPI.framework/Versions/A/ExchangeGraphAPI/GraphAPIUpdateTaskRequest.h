@class NSString, NSDictionary;

@interface GraphAPIUpdateTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSDictionary *task;

- (void).cxx_destruct;
- (id)resource;
- (id)body;
- (id)httpMethod;

@end
