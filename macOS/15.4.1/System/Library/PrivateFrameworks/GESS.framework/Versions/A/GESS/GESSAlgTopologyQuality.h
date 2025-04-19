@interface GESSAlgTopologyQuality : NSObject {
    struct TopologyQuality { unsigned int nVertices; unsigned int nHalfEdges; unsigned int nBoundaryHalfEdges; unsigned int nEdges; unsigned int nFaces; unsigned int nBoundaryLoops; unsigned int nGenus; unsigned int nComponents; } _qualityImpl;
}

@property unsigned int numberOfVertices;
@property unsigned int numberOfHalfEdges;
@property unsigned int numberOfBoundaryHalfEdges;
@property unsigned int numberOfEdges;
@property unsigned int numberOfFaces;
@property unsigned int numberOfBoundaryLoops;
@property unsigned int numberOfGenus;
@property unsigned int numberOfComponents;

- (id)description;
- (id).cxx_construct;
- (void)setQualityImpl:(const struct TopologyQuality { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (BOOL)equal:(id)a0;

@end
