@class NSString;
@protocol AXKActionDelegate;

@interface AXKBaseAction : NSObject <AXKAction>

@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *actionDescription;
@property (weak, nonatomic) id<AXKActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)mainWithElementController:(id)a0;
- (BOOL)performActionWithElementController:(id)a0;

@end
