@class NSString, NSArray, NSData, RCUserSegmentationConfiguration, NSDate, NSNumber;

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestKey;
@property (readonly, nonatomic) NSData *configurationData;
@property (retain, nonatomic) NSData *gzippedConfigurationData;
@property (retain, nonatomic) RCUserSegmentationConfiguration *userSegmentationConfiguration;
@property (retain, nonatomic) NSArray *treatmentIDs;
@property (retain, nonatomic) NSArray *segmentSetIDs;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *storefrontID;
@property (retain, nonatomic) NSString *configurationID;
@property (retain, nonatomic) NSString *contentHash;
@property (retain, nonatomic) NSString *lastModifiedString;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSString *lastModifiedFallbackString;
@property (retain, nonatomic) NSDate *lastFetchedDate;
@property (retain, nonatomic) NSNumber *fallbackMaxAge;
@property (retain, nonatomic) NSNumber *endpointMaxAge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpiredWithMaxTTL:(double)a0 allowedToReachEndpoint:(BOOL)a1;

@end
