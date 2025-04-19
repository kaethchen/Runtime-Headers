@class INStringResolutionResult, NSArray, INCreateEventIntentResponse, INCreateEventIntent, INPlacemarkResolutionResult, INDateComponentsRangeResolutionResult;

@interface _TtCO19SiriCalendarIntents11CreateEvent13IntentHandler : NSObject <INCreateEventIntentHandling> {
    void /* unknown type, empty encoding */ correctionsFlowProvider;
    void /* unknown type, empty encoding */ featureManager;
    void /* unknown type, empty encoding */ eventProvider;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ commonCats;
    void /* unknown type, empty encoding */ locationProvider;
    void /* unknown type, empty encoding */ mentionedNoun;
    void /* unknown type, empty encoding */ _correctionsClient;
    void /* unknown type, empty encoding */ shouldConfirmIntent;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmCreateEvent:(INCreateEventIntent *)a0 completion:(void (^)(INCreateEventIntentResponse *))a1;
- (void)handleCreateEvent:(INCreateEventIntent *)a0 completion:(void (^)(INCreateEventIntentResponse *))a1;
- (void)resolveDateTimeRangeForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))a1;
- (void)resolveLocationForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;
- (void)resolveParticipantsForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(NSArray *))a1;
- (void)resolveTitleForCreateEvent:(INCreateEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;

@end
