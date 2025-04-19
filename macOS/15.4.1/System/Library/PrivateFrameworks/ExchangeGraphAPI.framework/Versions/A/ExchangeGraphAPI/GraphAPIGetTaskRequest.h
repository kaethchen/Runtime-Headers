@class NSString;

@interface GraphAPIGetTaskRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *todoTaskListId;
@property (copy, nonatomic) NSString *taskId;

- (void).cxx_destruct;
- (id)resource;

@end
