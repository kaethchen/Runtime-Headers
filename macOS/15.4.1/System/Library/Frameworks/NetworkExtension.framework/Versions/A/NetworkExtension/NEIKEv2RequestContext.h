@interface NEIKEv2RequestContext : NSObject {
    BOOL _requestInitiator;
    BOOL _preventSleepUntilFinished;
    int _requestType;
}

- (void)dealloc;
- (id)description;
- (id)initWithRequestType:(int)a0;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
