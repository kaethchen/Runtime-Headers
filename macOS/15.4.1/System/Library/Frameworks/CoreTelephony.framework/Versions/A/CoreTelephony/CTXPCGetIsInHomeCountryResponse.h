@interface CTXPCGetIsInHomeCountryResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL isHome;

+ (id)allowedClassesForArguments;

- (id)initWithIsHome:(BOOL)a0;

@end
