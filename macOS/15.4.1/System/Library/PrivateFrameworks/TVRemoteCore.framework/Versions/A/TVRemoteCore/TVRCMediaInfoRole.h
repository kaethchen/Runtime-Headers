@class NSString, NSURL;

@interface TVRCMediaInfoRole : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *canonicalID;
@property (retain, nonatomic) NSString *actorName;
@property (retain, nonatomic) NSString *characterName;
@property (retain, nonatomic) NSString *roleDescription;
@property (retain, nonatomic) NSURL *productPage;
@property (retain, nonatomic) NSString *imageURLTemplate;

+ (id)roleWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRole:(id)a0;

@end
