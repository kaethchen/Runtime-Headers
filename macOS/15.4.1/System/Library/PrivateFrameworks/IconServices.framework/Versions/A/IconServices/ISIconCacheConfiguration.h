@class NSURL, NSString;

@interface ISIconCacheConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *url;
@property (retain) NSString *sandboxExtension;
@property (retain) NSString *salt;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
