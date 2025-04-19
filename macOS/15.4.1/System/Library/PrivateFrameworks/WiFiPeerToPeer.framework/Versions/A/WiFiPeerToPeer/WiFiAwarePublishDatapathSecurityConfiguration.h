@class NSArray, NSData, WiFiAwarePairingConfiguration;
@protocol WiFiAwarePublisherPairingDelegate;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *pmkList;
@property (readonly, nonatomic) NSArray *passphraseList;
@property (readonly, nonatomic) NSData *pmkID;
@property (readonly, nonatomic) WiFiAwarePairingConfiguration *pairingConfiguration;
@property (weak, nonatomic) id<WiFiAwarePublisherPairingDelegate> pairingDelegate;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPMKList:(id)a0 passphraseList:(id)a1;
- (id)initWithPMK:(id)a0 andPMKID:(id)a1;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1;

@end
