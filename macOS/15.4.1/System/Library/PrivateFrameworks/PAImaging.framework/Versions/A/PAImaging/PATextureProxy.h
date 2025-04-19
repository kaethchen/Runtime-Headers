@class PATexture;

@interface PATextureProxy : PAGLProxyTextureRect {
    PATexture *_texture;
}

- (void).cxx_destruct;
- (id)initWithPATexture:(id)a0;

@end
