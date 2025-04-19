@class NSString, NSURL;

@interface SAPathInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *bundleID;
@property (retain) NSURL *url;
@property BOOL exclusive;

+ (id)pathInfoWithURL:(id)a0;
+ (id)pathInfoWithURL:(id)a0 bundleID:(id)a1;
+ (id)pathInfoWithURL:(id)a0 bundleID:(id)a1 exclusive:(BOOL)a2;
+ (id)pathInfoWithURL:(id)a0 exclusive:(BOOL)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 exclusive:(BOOL)a1 bundleID:(id)a2;
- (id)initWithURL:(id)a0 exclusive:(BOOL)a1;

@end
