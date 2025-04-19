@class NSMutableArray, PKGCoreUIRenderer;

@interface PKGCoreUITransaction : NSObject {
    PKGCoreUIRenderer *_renderer;
    NSMutableArray *_workItems;
}

- (void)dealloc;
- (void)commit;
- (id)_layerUpdateKeyForOptions:(id)a0;
- (void)_scheduleRendererWork:(id /* block */)a0 mainThreadWork:(id /* block */)a1;
- (id)initWithTheme:(unsigned int)a0 useAX:(BOOL)a1;
- (void)updateLayer:(id)a0 key:(id)a1 rendererWork:(id /* block */)a2;

@end
