@interface CMISmartStyleColorManagementMetadata : NSObject

@property (nonatomic) int yccMatrixType;
@property (nonatomic) struct { int colorPrimaries; int transferFunction; float transferFunctionGamma; } colorSpace;
@property (nonatomic) BOOL cscYCCConversionEnabled;
@property (nonatomic) BOOL cscTransferFunctionEnabled;

- (id)init;

@end
