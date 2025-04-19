@interface CTXPCGetMaxDataRateResponse : CTXPCResponseMessage

@property (readonly, nonatomic) long long rate;

+ (id)allowedClassesForArguments;

- (id)initWithDataRate:(long long)a0;

@end
