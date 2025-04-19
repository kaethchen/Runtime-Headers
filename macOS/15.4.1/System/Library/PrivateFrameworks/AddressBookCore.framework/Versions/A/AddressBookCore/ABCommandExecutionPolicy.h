@interface ABCommandExecutionPolicy : NSObject

@property (nonatomic) BOOL ignoresGuardianRestrictions;

- (void)runWithBlock:(id /* block */)a0;

@end
