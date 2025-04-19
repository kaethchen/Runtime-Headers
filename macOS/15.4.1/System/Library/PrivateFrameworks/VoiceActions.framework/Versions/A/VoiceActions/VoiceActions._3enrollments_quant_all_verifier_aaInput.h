@class NSSet;

@interface VoiceActions._3enrollments_quant_all_verifier_aaInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ audio_embeddings;
    void /* unknown type, empty encoding */ text_labels;
    void /* unknown type, empty encoding */ audio_len;
    void /* unknown type, empty encoding */ text_len;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
