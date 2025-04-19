@class NSDictionary;

@interface AFSiriAnnounceWorkoutVoiceFeedbackRequest : NSObject <AFSiriExternalRequest> {
    NSDictionary *_data;
}

+ (void)deactivateOngoingRequestWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithVoiceFeedbackData:(id)a0;

@end
