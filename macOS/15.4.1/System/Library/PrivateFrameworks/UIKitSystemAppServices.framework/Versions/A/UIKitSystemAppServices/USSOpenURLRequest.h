@class NSArray;

@interface USSOpenURLRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSArray *sceneIdentifiers;

+ (id)requestWithURLs:(id)a0;
+ (id)requestWithURLs:(id)a0 andSceneIdentifiers:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURLs:(id)a0;
- (id)initWithURLs:(id)a0 andSceneIdentifiers:(id)a1;

@end
