@class NSString, NSURL;

@interface STAppMetadata : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSString *software;
@property (copy, nonatomic) NSURL *artworkURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 displayName:(id)a1 artworkURL:(id)a2 vendorName:(id)a3 ratingLabel:(id)a4 software:(id)a5;

@end
