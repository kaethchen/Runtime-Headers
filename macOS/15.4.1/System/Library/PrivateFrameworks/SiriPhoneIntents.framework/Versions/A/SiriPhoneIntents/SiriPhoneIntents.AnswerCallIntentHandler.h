@class INAnswerCallIntentResponse, INAnswerCallIntent;

@interface SiriPhoneIntents.AnswerCallIntentHandler : NSObject <INAnswerCallIntentHandling> {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ answerCallIntentHandlerDataSource;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleAnswerCall:(INAnswerCallIntent *)a0 completion:(void (^)(INAnswerCallIntentResponse *))a1;

@end
