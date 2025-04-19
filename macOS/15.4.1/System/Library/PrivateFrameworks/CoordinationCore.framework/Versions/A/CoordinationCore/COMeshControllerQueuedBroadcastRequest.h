@class COMeshResponse, COMeshRequest, COMeshNode, NSString;

@interface COMeshControllerQueuedBroadcastRequest : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshRequest *request;
@property (readonly, nonatomic) COMeshNode *destination;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) COMeshResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)command;
- (id)initWithRequest:(id)a0 destination:(id)a1 completionHandler:(id /* block */)a2;
- (void)invokeCallbackWithError:(id)a0;

@end
