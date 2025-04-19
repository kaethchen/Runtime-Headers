@interface SSRSpeakerProfileEmbeddingExtractor : NSObject

+ (void)extractPSRVoiceProfileWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)extractSATVoiceProfileWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)_extractWithModelContext:(id)a0 completion:(id /* block */)a1;
+ (void)extractProfileData:(id)a0 completion:(id /* block */)a1;

@end
