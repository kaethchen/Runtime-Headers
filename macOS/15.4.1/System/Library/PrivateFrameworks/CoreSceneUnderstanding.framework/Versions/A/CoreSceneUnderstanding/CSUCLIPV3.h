@class CSUCLIPImageEncoderV3, CSUCLIPTextEncoderV3, CSUCLIPV3Configuration;

@interface CSUCLIPV3 : NSObject {
    CSUCLIPTextEncoderV3 *_textEncoder;
    CSUCLIPImageEncoderV3 *_imageEncoder;
}

@property (readonly, nonatomic) CSUCLIPV3Configuration *configuration;

+ (BOOL)calculateCosineSimilarity:(float *)a0 ofEmbedding:(id)a1 toEmbedding:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (void)encodeInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void)encodeInputText:(id)a0 completion:(id /* block */)a1;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
