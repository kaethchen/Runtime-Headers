@class NSData, NSMutableDictionary;

@interface FTTranslationOptions : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationOptions { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) BOOL enable_disambiguation_alternatives;
@property (readonly, nonatomic) BOOL mask_profanity;
@property (readonly, nonatomic) BOOL disable_payload_logging;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationOptions> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationOptions { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationOptions { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
