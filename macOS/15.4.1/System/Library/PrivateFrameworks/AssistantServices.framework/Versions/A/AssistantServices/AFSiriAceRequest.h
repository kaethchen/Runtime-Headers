@class NSObject;
@protocol OS_xpc_object;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {
    NSObject<OS_xpc_object> *_startRequestData;
    NSObject<OS_xpc_object> *_startLocalRequestData;
    unsigned long long _requestOptions;
}

- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithStartLocalRequest:(id)a0 requestOptions:(unsigned long long)a1;
- (id)initWithStartRequest:(id)a0;
- (id)initWithStartRequest:(id)a0 requestOptions:(unsigned long long)a1;

@end
