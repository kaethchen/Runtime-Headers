@class NSData, IKRectanglePacker, NSOpenGLContext;

@interface IKTexturePackerItem : NSObject {
    unsigned int _textureID;
    NSData *_textureBytes;
    IKRectanglePacker *_rectanglePacker;
    NSOpenGLContext *_context;
}

- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)rectanglePacker;
- (float)fragmentation;
- (void)setTextureBytes:(id)a0;
- (void)setTextureID:(unsigned int)a0;
- (id)textureBytes;
- (unsigned int)textureID;

@end
