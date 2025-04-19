@class AFSiriIncomingCall;

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest> {
    AFSiriIncomingCall *_call;
}

- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithIncomingCall:(id)a0;

@end
