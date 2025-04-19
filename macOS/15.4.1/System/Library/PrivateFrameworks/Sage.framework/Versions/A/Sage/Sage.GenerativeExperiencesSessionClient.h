@interface Sage.GenerativeExperiencesSessionClient : NSObject <GenerativeExperiencesServiceDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ completionRequests;
    void /* unknown type, empty encoding */ completionOneShotRequest;
    void /* unknown type, empty encoding */ registrationRequests;
    void /* unknown type, empty encoding */ clientData;
}

- (id)init;
- (void).cxx_destruct;
- (void)sessionDidEncounterCompletionErrorFor:(id)a0 generativeError:(id)a1;
- (void)sessionDidEncounterRegistrationErrorFor:(id)a0 documentID:(long long)a1 generativeError:(id)a2;
- (void)sessionDidProduceCompletionResponseFor:(id)a0 element:(id)a1 isComplete:(BOOL)a2;
- (void)sessionDidProduceDocumentRegistrationStatusFor:(id)a0 documentID:(long long)a1 registrationStatus:(id)a2 isComplete:(BOOL)a3;
- (void)sessionDidProduceOneShotCompletionErrorFor:(id)a0 generativeError:(id)a1;
- (void)sessionDidProduceOneShotCompletionFor:(id)a0 completion:(id)a1;

@end
