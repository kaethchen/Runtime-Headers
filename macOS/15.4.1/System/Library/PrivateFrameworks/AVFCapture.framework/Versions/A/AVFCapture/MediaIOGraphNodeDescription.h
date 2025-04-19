@interface MediaIOGraphNodeDescription : NSObject {
    struct OpaqueCMIOGraph { } *_graph;
    int _graphNode;
}

@property (readonly) struct OpaqueCMIOGraph { } *graph;
@property (readonly) int node;
@property (readonly) struct OpaqueCMIOUnit { } *unit;
@property (readonly) unsigned int nodeFunctionalDesignation;
@property (readonly) unsigned int nodeIndex;

+ (id)nodeDescriptionWithGraphNode:(int)a0 graph:(struct OpaqueCMIOGraph { } *)a1;

- (void)dealloc;
- (id)initWithNode:(int)a0 graph:(struct OpaqueCMIOGraph { } *)a1;

@end
