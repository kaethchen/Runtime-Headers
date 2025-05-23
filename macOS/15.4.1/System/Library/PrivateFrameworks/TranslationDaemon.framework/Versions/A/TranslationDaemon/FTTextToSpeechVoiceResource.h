@class NSData, NSMutableDictionary;

@interface FTTextToSpeechVoiceResource : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)data:(id /* block */)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechVoiceResource> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechVoiceResource { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
