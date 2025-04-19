@class CSUCLIPImageEncoderV3Configuration, CSUCLIPTextEncoderV3Configuration;

@interface CSUCLIPV3Configuration : NSObject <CSUCLIPConfiguration>

@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) CSUCLIPImageEncoderV3Configuration *imageEncoderConfiguration;
@property (readonly, nonatomic) CSUCLIPTextEncoderV3Configuration *textEncoderConfiguration;
@property (readonly) long long embeddingRevision;
@property (readonly) long long textEmbeddingType;

+ (id)CLIPV3ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initWithRevision:(long long)a0 textEncoderConfiguration:(id)a1 imageEncoderConfiguration:(id)a2 embeddingRevision:(long long)a3 textEmbeddingType:(long long)a4;

@end
