@class NSString;

@interface CTXPCGetMobileCountryCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *mcc;

- (id)initWithMcc:(id)a0;

@end
