@class NSString, NSURL;

@interface TPSAnalyticsEventServiceRequest : TPSAnalyticsEvent {
    NSString *_type;
    NSURL *_url;
    long long _statusCode;
    NSString *_etag;
    unsigned long long _requestTime;
    unsigned long long _requestTtfb;
    long long _responseHeadersSize;
    long long _responseSize;
    unsigned long long _responseTime;
    unsigned long long _timeToDownloadResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceRequestEventWithType:(id)a0 metrics:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithType:(id)a0 metrics:(id)a1;
- (id)mutableAnalyticsEventRepresentation;

@end
