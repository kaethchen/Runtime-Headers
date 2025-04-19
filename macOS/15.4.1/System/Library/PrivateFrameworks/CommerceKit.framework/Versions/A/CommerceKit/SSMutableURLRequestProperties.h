@class NSString, NSDictionary, NSData, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property long long allowedRetryCount;
@property unsigned long long cachePolicy;
@property (copy) NSString *clientIdentifier;
@property (copy) NSData *HTTPBody;
@property (copy) NSString *HTTPMethod;
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property double timeoutInterval;
@property (copy) NSString *URLBagKey;
@property (retain) NSURL *URL;
@property (copy) NSDictionary *HTTPHeaders;
@property (copy) NSDictionary *requestParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setURL:(id)a0;
- (void)setCachePolicy:(unsigned long long)a0;
- (void)setHTTPBody:(id)a0;
- (void)setHTTPMethod:(id)a0;
- (void)setTimeoutInterval:(double)a0;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (void)setClientIdentifier:(id)a0;
- (void)setRequestParameters:(id)a0;
- (void)setHTTPHeaders:(id)a0;
- (void)setURLBagKey:(id)a0;
- (void)setITunesStoreRequest:(BOOL)a0;
- (void)setAllowedRetryCount:(long long)a0;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;

@end
