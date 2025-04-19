@interface CTXPCGetIsNetworkReselectionNeededResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL needsReselection;

+ (id)allowedClassesForArguments;

- (id)initWithNeedsReselection:(BOOL)a0;

@end
