@class NSString, NSArray, NSURL, NSDictionary, NSNumber;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *artistName;
@property (readonly, copy) NSArray *artwork;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSArray *categoryNames;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *itemKind;
@property (readonly, copy) NSNumber *iTunesStoreIdentifier;
@property (readonly, copy) NSString *offerName;
@property (readonly, copy) NSArray *offers;
@property (readonly, getter=isPOIBased) BOOL POIBased;
@property (readonly, copy) NSURL *productPageURL;
@property (readonly) long long numberOfUserRatings;
@property (readonly) float userRating;
@property (readonly) long long numberOfUserRatingsForCurrentVersion;
@property (readonly) float userRatingForCurrentVersion;
@property (readonly) NSDictionary *itemDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLookupDictionary:(id)a0;

@end
