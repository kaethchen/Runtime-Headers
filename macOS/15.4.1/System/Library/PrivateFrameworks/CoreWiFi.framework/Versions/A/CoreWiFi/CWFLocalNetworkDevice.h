@class NSSet, NSString;

@interface CWFLocalNetworkDevice : NSObject

@property (copy, nonatomic) NSSet *sourceAddresses;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *serviceNames;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)preferredSourceAddress;
- (id)sanitizedName;

@end
