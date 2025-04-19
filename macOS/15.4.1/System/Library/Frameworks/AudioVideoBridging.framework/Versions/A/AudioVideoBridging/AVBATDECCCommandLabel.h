@class NSString;

@interface AVBATDECCCommandLabel : AVBATDECCCommandEvent

@property (copy, nonatomic) id /* block */ normalHandler;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *recoveryTitle;

- (void).cxx_destruct;

@end
