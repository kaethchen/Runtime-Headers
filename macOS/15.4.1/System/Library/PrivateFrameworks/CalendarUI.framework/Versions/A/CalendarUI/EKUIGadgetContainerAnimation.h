@class EKUIGadgetContainer;

@interface EKUIGadgetContainerAnimation : NSObject

@property (weak) EKUIGadgetContainer *targetContainer;
@property BOOL expanding;
@property double startConstant;
@property double endConstant;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTargetContainer:(id)a0 startingConstant:(double)a1 endingConstant:(double)a2 isExpanding:(BOOL)a3;

@end
