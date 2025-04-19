@interface CTXPCGetIsDataAttachedResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL isDataAttached;

+ (id)allowedClassesForArguments;

- (id)initWithIsDataAttached:(BOOL)a0;

@end
