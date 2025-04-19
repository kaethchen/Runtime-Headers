@class CTRoamingStatus;

@interface CTXPCGetRoamingStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTRoamingStatus *status;

+ (id)allowedClassesForArguments;

- (id)initWithRoamingStatus:(id)a0;

@end
