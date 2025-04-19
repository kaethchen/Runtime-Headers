@class NSString;

@interface QCSCN_EdgeAntialiasingOptionsReserved : NSObject {
    id _parent;
    BOOL _enable;
    double _trimFactor;
    double _minEdgeLength;
    double _minEdgeAngle;
    double _minTriangleArea;
    BOOL _disableAntialiasingOfFacingEdges;
    BOOL _debugMode;
    NSString *_name;
    NSString *_identifier;
}

@end
