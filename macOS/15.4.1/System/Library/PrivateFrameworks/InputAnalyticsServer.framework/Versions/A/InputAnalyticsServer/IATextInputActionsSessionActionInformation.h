@class NSString;

@interface IATextInputActionsSessionActionInformation : NSObject

@property (copy, nonatomic) NSString *sessionActionsString;
@property (nonatomic) BOOL sessionHasOnlyPrimaryInput;
@property (nonatomic) BOOL sessionHasDictation;

- (void).cxx_destruct;

@end
