@class NSArray;

@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult

@property (readonly) NSArray *messageActions;

- (void).cxx_destruct;
- (void)_processActions:(id)a0;
- (id)initWithEnqueueResult:(id)a0;

@end
