@class NSString, ILChangeManager, NSObject;
@protocol ILMediaObjectsProvider, NSLocking;

@interface ILAuxiliaryContext : NSObject {
    NSString *_pluginIdentifier;
    ILChangeManager *_changeManager;
    NSObject<ILMediaObjectsProvider> *_mediaObjectsProvider;
    int _loadState;
    NSObject<NSLocking> *_stateLock;
}

- (void)dealloc;
- (id)pluginIdentifier;
- (id)stateLock;
- (int)loadState;
- (void)setPluginIdentifier:(id)a0;
- (id)changeManager;
- (id)initWithPluginIdentifier:(id)a0 mediaObjectsProvider:(id)a1 stateLock:(id)a2;
- (id)mediaObjectsProvider;
- (void)setChangeManager:(id)a0;
- (void)setLoadState:(int)a0;
- (void)setMediaObjectsProvider:(id)a0;

@end
