@class NSObject, NSUUID, NSURLResponse, NSDictionary, NSURLRequest, __CFN_ConnectionMetrics;
@protocol OS_dispatch_group, OS_nw_data_transfer_report;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    BOOL _scheduledOriginLoad;
    BOOL _firstOnConnection;
    BOOL _pushed;
    BOOL _APSRelayAttempted;
    BOOL _APSRelaySucceeded;
    int _pidForHAR;
    long long _lastResponseHeaderSize;
    long long _lastResponseBodySize;
    long long _lastResponseBodyTransferSize;
    NSUUID *_UUID;
    NSURLRequest *_request;
    NSURLRequest *_transferredRequest;
    NSURLResponse *_cachedResponse;
    NSURLResponse *_lastResponse;
    __CFN_ConnectionMetrics *_connectionMetrics;
    long long _requestHeaderSize;
    long long _requestBodySize;
    long long _requestBodyTransferSize;
    long long _responseHeaderSize;
    long long _responseBodySize;
    long long _responseBodyTransferSize;
    double _beginTime;
    double _endTime;
    double _cacheLookupBeginTime;
    double _cacheLookupEndTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    unsigned long long _endReason;
    long long _schedulingTier;
    long long _options;
    double _reusedAfterTime;
    NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSObject<OS_dispatch_group> *_tcpInfoGroup;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) __CFN_ConnectionMetrics *_daemon_connectionMetrics;
@property (readonly, nonatomic) long long _daemon_requestHeaderSize;
@property (readonly, nonatomic) long long _daemon_requestBodyTransferSize;
@property (readonly, nonatomic) long long _daemon_responseHeaderSize;
@property (readonly, nonatomic) long long _daemon_responseBodyTransferSize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
