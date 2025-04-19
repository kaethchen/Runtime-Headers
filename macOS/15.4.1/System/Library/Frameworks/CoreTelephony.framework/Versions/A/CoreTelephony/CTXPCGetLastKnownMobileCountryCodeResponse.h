@class NSString;

@interface CTXPCGetLastKnownMobileCountryCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *mcc;

- (id)initWithLastMcc:(id)a0;

@end
