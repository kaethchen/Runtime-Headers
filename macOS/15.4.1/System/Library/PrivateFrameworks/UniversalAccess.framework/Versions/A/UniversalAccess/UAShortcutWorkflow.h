@class WFAccessibilityWorkflow, NSString;

@interface UAShortcutWorkflow : NSObject

@property (retain, nonatomic) WFAccessibilityWorkflow *_wfWorkflow;
@property (copy, nonatomic) NSString *_identifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)availableWorkflows;
+ (void)runWorkflow:(id)a0 completionHandler:(id /* block */)a1;
+ (id)workflowWithIdentifier:(id)a0;
+ (id)workflowWithName:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithWorkflow:(id)a0;

@end
