@class NSURL;

@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *digitalCardImageUrl;
@property (readonly, nonatomic) NSURL *thumbnailImageUrl;
@property (readonly, nonatomic) NSURL *logoImageUrl;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageAssetsDictionary:(id)a0;

@end
