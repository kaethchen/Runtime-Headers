@class NSString;

@interface GraphAPIGetTaskListDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (void).cxx_destruct;
- (id)resource;

@end
