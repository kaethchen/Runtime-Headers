@class NSString, NSDictionary, NSData, NSURL;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    long long _allowedRetryCount;
    unsigned long long _cachePolicy;
    NSString *_clientIdentifier;
    NSData *_httpBody;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSDictionary *_requestParameters;
    double _timeoutInterval;
    NSString *_urlBagKey;
    NSURL *_url;
}

@property (readonly) long long allowedRetryCount;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSData *HTTPBody;
@property (readonly, copy) NSDictionary *HTTPHeaders;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (readonly, copy) NSDictionary *requestParameters;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSString *URLBagKey;
@property (readonly) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initCommon;
- (id)copyURLRequest;
- (id)initWithURLRequest:(id)a0;

@end
