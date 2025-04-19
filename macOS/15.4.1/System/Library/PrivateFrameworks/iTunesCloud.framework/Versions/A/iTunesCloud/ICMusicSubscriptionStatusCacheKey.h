@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)a0;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)a0;
- (id)initWithDictionaryRepresentation:(id)a0 requiringDSID:(BOOL)a1;

@end
