@class INHangUpCallIntentResponse, INHangUpCallIntent;

@interface SiriPhoneIntents.HangUpCallIntentHandler : NSObject <INHangUpCallIntentHandling> {
    void /* unknown type, empty encoding */ callCenter;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmHangUpCall:(INHangUpCallIntent *)a0 completion:(void (^)(INHangUpCallIntentResponse *))a1;
- (void)handleHangUpCall:(INHangUpCallIntent *)a0 completion:(void (^)(INHangUpCallIntentResponse *))a1;

@end
