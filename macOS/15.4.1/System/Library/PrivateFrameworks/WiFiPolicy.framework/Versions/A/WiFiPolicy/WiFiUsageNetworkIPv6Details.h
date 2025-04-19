@class NSArray;

@interface WiFiUsageNetworkIPv6Details : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSArray *ipv6Addresses;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
