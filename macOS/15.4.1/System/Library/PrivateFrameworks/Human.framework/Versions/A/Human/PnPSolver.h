@interface PnPSolver : NSObject

- (BOOL)solveWithImagePoints:(const float *)a0 modelPoints:(const void *)a1 numImagePoints:(int)a2 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a3 transform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a4;

@end
