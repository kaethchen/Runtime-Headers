@class NSString, NSMutableDictionary, NSData, FTTranslationPhraseMetaInfo;

@interface FTSpeechTranslationMtResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationPhrase { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSString *translation_phrase;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) BOOL low_confidence;
@property (readonly, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
@property (readonly, nonatomic) BOOL contains_masked_profanity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse_::TranslationPhrase> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
