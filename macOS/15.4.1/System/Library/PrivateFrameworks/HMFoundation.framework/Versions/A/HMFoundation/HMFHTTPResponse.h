@class HMFHTTPRequest, NSDictionary, HMFHTTPResponseInternal, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) HMFHTTPResponseInternal *internal;
@property (readonly, nonatomic) HMFHTTPRequest *request;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) NSData *body;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithRequest:(id)a0 internalResponse:(id)a1;

@end
