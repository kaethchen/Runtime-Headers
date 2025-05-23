@class MPSNNFilterNode;
@protocol MPSHandle;

@interface MPSNNStateNode : NSObject {
    MPSNNFilterNode *_parent;
    unsigned long long _clientCount;
    BOOL _initializedWithParent;
}

@property (retain, nonatomic) id<MPSHandle> handle;
@property (nonatomic) BOOL exportFromGraph;
@property (nonatomic) BOOL synchronizeResource;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithParent:(id)a0;
- (id)debugQuickLookObject;

@end
