@class NSString;

@interface PKGCoreUIRenderer : NSObject {
    NSString *_rendererName;
    struct OpaqueCUIRendererRef { } *_renderer;
}

+ (id)rendererForTheme:(unsigned int)a0 useAX:(BOOL)a1;

- (void)dealloc;
- (struct OpaqueCUIRendererRef { } *)renderer;
- (id)initWithRendererName:(id)a0;
- (id)rendererName;

@end
