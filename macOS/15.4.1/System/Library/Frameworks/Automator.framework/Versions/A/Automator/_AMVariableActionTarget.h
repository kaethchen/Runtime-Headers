@protocol AMVariableControllerProtocol;

@interface _AMVariableActionTarget : NSObject

@property (weak, nonatomic) id<AMVariableControllerProtocol> variableController;

- (void).cxx_destruct;
- (void)editVariable:(id)a0;
- (id)initWithVariableController:(id)a0;

@end
