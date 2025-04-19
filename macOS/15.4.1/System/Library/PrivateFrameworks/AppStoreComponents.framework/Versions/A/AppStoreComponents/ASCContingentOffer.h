@class NSString, NSDictionary, NSArray, NSNumber, ASCAdamID;
@protocol ASCOffer;

@interface ASCContingentOffer : NSObject <ASCOffer, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id<ASCOffer> organicOffer;
@property (readonly, copy, nonatomic) id<ASCOffer> streamlinedOffer;
@property (readonly, copy, nonatomic) NSString *offerID;
@property (readonly, copy, nonatomic) NSNumber *iapItemID;
@property (readonly, copy, nonatomic) NSString *iapItemName;
@property (readonly, copy, nonatomic) NSString *iapProductName;
@property (readonly, nonatomic) long long offerType;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 titles:(id)a1 subtitles:(id)a2 flags:(long long)a3 ageRating:(id)a4 metrics:(id)a5 organicOffer:(id)a6 streamlinedOffer:(id)a7 offerID:(id)a8 iapItemID:(id)a9 iapItemName:(id)a10 iapProductName:(id)a11 offerType:(long long)a12;
- (id)offerWithMetrics:(id)a0;

@end
