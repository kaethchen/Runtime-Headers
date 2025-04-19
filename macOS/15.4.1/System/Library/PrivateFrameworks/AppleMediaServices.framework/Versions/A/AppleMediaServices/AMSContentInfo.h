@class NSString, NSDate;

@interface AMSContentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *cacheKey;
@property (retain) NSDate *created;
@property (retain) NSDate *expires;
@property (retain) NSString *path;
@property (retain) NSString *version;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
