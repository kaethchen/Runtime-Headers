@class NSURLRequest, AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>

@property (retain) AMSURLRequestProperties *properties;
@property (readonly, nonatomic) NSURLRequest *urlRequest;

+ (id)logableDescriptionForRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)initWithRequest:(id)a0 properties:(id)a1;
- (id)initWithRequest:(id)a0 purchaseType:(long long)a1 buyParams:(id)a2;

@end
