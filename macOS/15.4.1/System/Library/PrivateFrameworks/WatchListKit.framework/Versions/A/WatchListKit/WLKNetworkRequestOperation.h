@class AMSURLRequestEncoder, NSString, NSData, NSError, NSDate, NSObject, AMSURLSession, NSURLRequest, AMSURLResult, NSURLSessionDataTask, NSHTTPURLResponse, NSNumber;
@protocol OS_nw_activity;

@interface WLKNetworkRequestOperation : WLKAsyncOperation

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AMSURLResult *amsUrlResponse;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) long long responseStatusCode;
@property (nonatomic) long long resourceFetchType;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) AMSURLRequestEncoder *encoder;
@property (retain, nonatomic) AMSURLSession *session;
@property (copy, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long signpostIdentifier;
@property (copy, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSNumber *networkLabel;
@property (retain, nonatomic) NSObject<OS_nw_activity> *networkActivity;
@property (weak, nonatomic) id authenticationDelegate;
@property (readonly, nonatomic) long long options;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)shortDescription;
- (id)originalExpirationDate;
- (void)configureSession;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;
- (id)initWithURLRequest:(id)a0 options:(long long)a1;
- (void)_executeRequest;
- (void)processResponse;
- (void)_finishExecutionIfPossibleWithError:(id)a0;
- (void)_startNetworkRequest;
- (long long)_statusCodeForAMSResult:(id)a0 error:(id)a1;
- (void)handleResult:(id)a0 error:(id)a1;
- (id)httpHeaderMaxAge;
- (id)httpHeaderResponseDate;
- (void)prepareAndStartNetworkRequest;
- (void)prepareURLRequest:(id /* block */)a0;

@end
