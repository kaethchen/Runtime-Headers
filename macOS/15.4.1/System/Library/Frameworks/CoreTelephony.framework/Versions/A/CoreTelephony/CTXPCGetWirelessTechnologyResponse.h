@class NSString;

@interface CTXPCGetWirelessTechnologyResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *technology;

- (id)initWithTechnology:(id)a0;

@end
