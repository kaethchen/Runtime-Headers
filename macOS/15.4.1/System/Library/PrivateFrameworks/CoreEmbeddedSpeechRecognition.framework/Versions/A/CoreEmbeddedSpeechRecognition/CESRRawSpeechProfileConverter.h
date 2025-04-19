@class NSSet, NSMutableDictionary, NSDictionary, KVProfile;

@interface CESRRawSpeechProfileConverter : NSObject {
    NSSet *_omitItemTypes;
    KVProfile *_primaryProfile;
    NSMutableDictionary *_companionProfiles;
    NSDictionary *_primaryPriors;
    NSMutableDictionary *_companionPriors;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addCompanionRawSpeechProfile:(id)a0 deviceId:(id)a1 userId:(id)a2 error:(id *)a3;
- (id)convertToKVProfileWithError:(id *)a0;
- (id)initWithOmittedItemTypes:(id)a0;
- (BOOL)setPrimaryRawSpeechProfile:(id)a0 error:(id *)a1;
- (BOOL)_processRawSpeechProfile:(id)a0 deviceId:(id)a1 userId:(id)a2 error:(id *)a3;

@end
