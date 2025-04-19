@class NSURLRequest, NSError, NSDate;

@interface ACSEFoundation.BAARequestSigner : NSObject {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ baaCertificateFetcher;
}

@property (nonatomic, readonly) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (void)signWithRequest:(NSURLRequest *)a0 completionHandler:(void (^)(NSURLRequest *, NSError *))a1;

@end
