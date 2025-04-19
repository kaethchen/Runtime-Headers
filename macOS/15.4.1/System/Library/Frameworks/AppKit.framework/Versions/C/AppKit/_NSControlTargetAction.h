@interface _NSControlTargetAction : NSObject

@property (weak) id target;
@property SEL action;
@property unsigned long long eventMask;

- (id)description;
- (void).cxx_destruct;

@end
