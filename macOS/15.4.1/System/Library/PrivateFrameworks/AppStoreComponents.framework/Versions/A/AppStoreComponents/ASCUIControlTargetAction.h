@interface ASCUIControlTargetAction : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) unsigned long long eventMask;

- (void).cxx_destruct;

@end
