@class NSString, NSData, NSDate;

@interface PKMerchantTokenUsageMetadata : NSObject

@property (readonly, nonatomic) long long updateSequenceNumber;
@property (readonly, nonatomic) NSDate *updateDate;
@property (readonly, nonatomic) NSDate *defaultExpirationDate;
@property (readonly, nonatomic) NSDate *maximumExpirationDate;
@property (readonly, copy, nonatomic) NSString *ciphersuite;
@property (readonly, copy, nonatomic) NSData *merchantTokenPublicKeyHash;
@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSData *merchantPublicKey;
@property (readonly, copy, nonatomic) NSData *infoHash;
@property (readonly, copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
