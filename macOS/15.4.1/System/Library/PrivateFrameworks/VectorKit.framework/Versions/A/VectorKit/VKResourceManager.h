@class NSBundle;

@interface VKResourceManager : NSObject {
    NSBundle *_vkBundle;
}

- (id)init;
- (void).cxx_destruct;
- (id)pathForResourceWithName:(id)a0;
- (id)_localNameForResourceName:(id)a0;
- (id)dataForResourceWithName:(id)a0;
- (id)dataForResourceWithName:(id)a0 fallbackNameHandler:(id /* block */)a1;
- (BOOL)isDevResourceWithName:(id)a0;

@end
