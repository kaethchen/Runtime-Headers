@interface CTXPCGetSupports5GStandaloneResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL support;

+ (id)allowedClassesForArguments;

- (id)initWithSupport:(BOOL)a0;

@end
