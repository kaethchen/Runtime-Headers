@class NSString, NSDictionary, NSData, NSURL;

@interface FLFollowUpAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long eventSource;
@property (nonatomic) unsigned long long sqlID;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *identifier;
@property (copy) NSString *label;
@property (copy) NSURL *url;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *launchActionURL;
@property (copy, nonatomic) NSData *launchActionArguments;
@property (nonatomic) BOOL destructive;

+ (BOOL)_validURLToLaunch:(id)a0;
+ (id)actionWithLabel:(id)a0 url:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_launchBundleIDForURL;
- (BOOL)_loadActionURL;
- (BOOL)_validURLs;
- (id)initWithLabel:(id)a0 url:(id)a1;

@end
