@interface CTXPCGetIsNetworkSelectionMenuAvailableResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL available;

+ (id)allowedClassesForArguments;

- (id)initWithIsAvailable:(BOOL)a0;

@end
