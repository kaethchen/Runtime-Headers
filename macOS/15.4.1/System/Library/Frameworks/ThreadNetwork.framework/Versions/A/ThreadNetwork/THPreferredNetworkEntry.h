@class NSString, THCredentials, NSData, NSDate;

@interface THPreferredNetworkEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSData *extendedPANID;
@property (readonly, nonatomic) NSData *ipv4Signature;
@property (readonly, nonatomic) NSData *ipv6Signature;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) THCredentials *credentialsRecord;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPrefEntry:(id)a0 extendedPANID:(id)a1 ipv4Signature:(id)a2 ipv6Signature:(id)a3 wifiSSID:(id)a4 creationDate:(id)a5 lastModificationDate:(id)a6 credentialsRecord:(id)a7;

@end
