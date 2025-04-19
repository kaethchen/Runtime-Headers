@class MGGroup, MGGroupsMediator;

@interface MGGroupsQueryAgentResult : NSObject

@property (readonly, nonatomic) MGGroup *group;
@property (readonly, weak, nonatomic) MGGroupsMediator *mediator;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 mediator:(id)a1;

@end
