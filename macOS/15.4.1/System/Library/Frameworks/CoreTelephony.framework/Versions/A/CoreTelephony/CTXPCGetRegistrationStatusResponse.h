@class NSString;

@interface CTXPCGetRegistrationStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *status;

- (id)initWithStatus:(id)a0;

@end
