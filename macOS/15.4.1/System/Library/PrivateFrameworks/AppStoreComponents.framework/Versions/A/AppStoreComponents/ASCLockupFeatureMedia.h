@class NSString, ASCScreenshots, ASCTrailers;

@interface ASCLockupFeatureMedia : NSObject <ASCLockupFeature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property (readonly, copy, nonatomic) ASCTrailers *trailers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScreenshots:(id)a0 trailers:(id)a1;

@end
