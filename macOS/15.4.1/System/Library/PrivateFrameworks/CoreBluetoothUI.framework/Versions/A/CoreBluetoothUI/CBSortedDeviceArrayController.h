@class NSMapTable;

@interface CBSortedDeviceArrayController : NSArrayController

@property (retain) NSMapTable *peerManifest;

- (void)initialize;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeObject:(id)a0;
- (id)arrangeObjects:(id)a0;
- (void)addObjects:(id)a0;
- (id)initWithContent:(id)a0;
- (id)findDeviceDictForPeer:(id)a0;

@end
