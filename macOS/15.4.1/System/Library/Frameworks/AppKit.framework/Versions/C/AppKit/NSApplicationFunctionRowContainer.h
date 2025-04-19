@class NSTouchBar, NSString;

@interface NSApplicationFunctionRowContainer : NSObject <NSTouchBarProviderContainer>

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)NS_touchBarProviders;
- (id)NS_touchBarProvidersKeyPaths;
- (BOOL)_lockoutEngaged;

@end
