@class NSMutableArray;

@interface BWGraphLiveExtension : NSObject {
    long long _configurationID;
    NSMutableArray *_nodes;
    BOOL _committed;
}

- (void)dealloc;
- (BOOL)committed;
- (id)nodes;
- (void)setCommitted:(BOOL)a0;
- (void)addNode:(id)a0;

@end
