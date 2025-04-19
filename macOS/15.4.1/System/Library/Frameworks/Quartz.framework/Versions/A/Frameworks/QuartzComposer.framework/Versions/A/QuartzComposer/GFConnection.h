@class GFPort, GFGraph, NSDictionary, NSMutableDictionary;

@interface GFConnection : NSObject <GFBase> {
    GFGraph *_owner;
    GFPort *_sourcePort;
    GFPort *_destPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    void *_unused[4];
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)state;
- (id)userInfo;
- (BOOL)setState:(id)a0;
- (id)attributes;
- (id)key;
- (id)graph;
- (id)destinationPort;
- (void)connectionWillDeleteFromGraph;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (id)sourcePort;
- (void)stateUpdated;

@end
