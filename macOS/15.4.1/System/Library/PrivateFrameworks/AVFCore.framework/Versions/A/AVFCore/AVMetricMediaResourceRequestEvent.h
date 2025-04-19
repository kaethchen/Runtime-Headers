@class NSString, NSURLSessionTaskMetrics, NSURL, NSDate, AVMetricErrorEvent;

@interface AVMetricMediaResourceRequestEvent : AVMetricEvent {
    NSURL *_url;
    NSString *_serverAddress;
    NSDate *_requestStartTime;
    NSDate *_requestEndTime;
    NSDate *_responseStartTime;
    NSDate *_responseEndTime;
    struct _NSRange { unsigned long long location; unsigned long long length; } _byteRange;
    BOOL _readFromCache;
    AVMetricErrorEvent *_errorEvent;
    NSURLSessionTaskMetrics *_networkTransactionMetrics;
}

@property (readonly) NSURL *url;
@property (readonly) NSString *serverAddress;
@property (readonly) NSDate *requestStartTime;
@property (readonly) NSDate *requestEndTime;
@property (readonly) NSDate *responseStartTime;
@property (readonly) NSDate *responseEndTime;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } byteRange;
@property (readonly, getter=wasReadFromCache) BOOL readFromCache;
@property (readonly) AVMetricErrorEvent *errorEvent;
@property (readonly) NSURLSessionTaskMetrics *networkTransactionMetrics;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 url:(id)a3 serverAddress:(id)a4 requestStartTime:(id)a5 requestEndTime:(id)a6 responseStartTime:(id)a7 responseEndTime:(id)a8 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 readFromCache:(BOOL)a10 errorEvent:(id)a11 networkTransactionMetrics:(id)a12;

@end
