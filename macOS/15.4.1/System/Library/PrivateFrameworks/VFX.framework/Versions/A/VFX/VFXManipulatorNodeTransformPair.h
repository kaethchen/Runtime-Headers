@class VFXNode;

@interface VFXManipulatorNodeTransformPair : NSObject

@property (retain, nonatomic) VFXNode *node;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

@end
