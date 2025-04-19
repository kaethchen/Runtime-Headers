@class NSString, NSURLResponse, NSMutableData, NSURLRequest, NSError;

@interface QCSynchronousURLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSMutableData *_resourceData;
    NSError *_error;
    BOOL _done;
    BOOL _allowRedirections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)error;
- (id)resourceData;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (id)response;
- (void)run:(id)a0;
- (id)initWithRequest:(id)a0 allowRedirections:(BOOL)a1;

@end
