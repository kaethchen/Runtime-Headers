@class AMAction;

@interface AMActionViewController : NSViewController

@property (retain, nonatomic) AMAction *_action;
@property (readonly, nonatomic) AMAction *action;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 workflowView:(id)a1;

@end
