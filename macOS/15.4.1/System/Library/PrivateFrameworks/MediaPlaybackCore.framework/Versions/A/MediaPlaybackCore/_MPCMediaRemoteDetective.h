@class MPRemoteCommandEvent, MPRemoteCommandStatus;

@interface _MPCMediaRemoteDetective : NSObject {
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ eventStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublisher:(id)a0;
- (void)investigateTimeoutForEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(MPRemoteCommandStatus *))a1;

@end
