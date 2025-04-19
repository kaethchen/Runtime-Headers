@interface CTXPCBooleanResponseMessage : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL result;

+ (id)allowedClassesForArguments;

- (id)initWithResult:(BOOL)a0;

@end
