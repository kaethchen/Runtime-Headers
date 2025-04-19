@class PAOpenGLContext, NSMutableDictionary;

@interface PAGLFramebuffer : PAGLObject {
    NSMutableDictionary *_attachements;
}

@property (readonly, weak, nonatomic) PAOpenGLContext *context;
@property (readonly, nonatomic) unsigned int target;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (void).cxx_destruct;
- (BOOL)_begin;
- (id)initWithTarget:(unsigned int)a0 context:(id)a1;
- (unsigned int)createWithContext:(id)a0;
- (void)deleteIfNeeded;
- (void)_end;
- (void)_withFramebuffer:(id /* block */)a0;
- (void)removeAllAttachements;
- (void)removeAttachementAtPoint:(unsigned int)a0;
- (void)setAttachement:(id)a0 atPoint:(unsigned int)a1;
- (void)withFramebuffer:(id /* block */)a0;

@end
