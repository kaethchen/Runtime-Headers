@class PAImageRenderResponse, NSString, PFCancelerObserver, PAImageRenderService, PFDispatchQueue, PAImageRenderRequest, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageRenderRequestHandler : NSObject <PAImageAssetClientDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _responseHandler;
    PFDispatchQueue *_responseQueue;
    PAImageRenderResponse *_response;
    PFCancelerObserver *_cancelObserver;
}

@property (readonly) PAImageRenderRequest *request;
@property (weak, nonatomic) PAImageRenderService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_complete;
- (void)_processRequest;
- (void)_handleRequest;
- (void)handleRequest;
- (id)initWithRequest:(id)a0 responseQueue:(id)a1 responseHandler:(id /* block */)a2;

@end
