@class NSString;

@interface CTCarrier : NSObject

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic) BOOL allowsVOIP;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
