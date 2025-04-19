@class NSURL;

@interface FSServerURLResource : FSResource

@property (readonly) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)resourceWithURL:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (long long)kind;
- (id)makeProxy;
- (id)getResourceID;

@end
