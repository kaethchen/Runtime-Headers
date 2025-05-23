@class NSString, NSData, NSDate;

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSData *ssid;
@property (nonatomic) long long security;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isPasspoint;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) BOOL isCaptive;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isMultiAP;
@property (copy, nonatomic) NSDate *lastJoinedTimestamp;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPreferredNetwork:(id)a0;

@end
