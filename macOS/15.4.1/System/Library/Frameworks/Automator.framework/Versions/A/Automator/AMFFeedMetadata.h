@class NSString, NSURL;

@interface AMFFeedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *homepageURL;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 imageURL:(id)a1 homepageURL:(id)a2;

@end
