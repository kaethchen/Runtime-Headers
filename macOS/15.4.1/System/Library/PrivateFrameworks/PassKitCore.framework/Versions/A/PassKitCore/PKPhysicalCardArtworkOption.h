@class NSString, NSURL, PKImage;

@interface PKPhysicalCardArtworkOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *frontFaceImageURL;
@property (readonly, nonatomic) unsigned long long minimumEstimatedShippingTime;
@property (readonly, nonatomic) unsigned long long maximumEstimatedShippingTime;
@property (readonly, nonatomic) long long shippingTimeUnit;
@property (readonly, nonatomic) BOOL optionUnavailable;
@property (retain, nonatomic) PKImage *frontFaceImage;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
