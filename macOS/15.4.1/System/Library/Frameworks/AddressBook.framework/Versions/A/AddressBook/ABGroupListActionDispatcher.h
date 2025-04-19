@class ABGroupListActions;

@interface ABGroupListActionDispatcher : ABActionDispatcher

@property (retain) ABGroupListActions *actions;

- (void).cxx_destruct;
- (id)actionFor_createGroup;
- (void)willRegisterActions;

@end
