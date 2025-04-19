@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>

@property (retain, nonatomic) NSURLRequest *request;

+ (id)keyWithRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;

@end
