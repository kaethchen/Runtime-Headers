@class NSSet;

@interface VoiceActions.quant_verifier_aa_fp32Input : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ input_audio_embeddings;
    void /* unknown type, empty encoding */ enroll_audio_embeddings;
    void /* unknown type, empty encoding */ input_audio_len;
    void /* unknown type, empty encoding */ enroll_audio_len;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
