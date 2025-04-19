@class NSString;

@interface VNEspressoModelWeightsFileInfo : NSObject

@property (readonly, nonatomic) NSString *weightsFilePath;
@property (readonly) BOOL weightsFileExists;
@property (readonly) BOOL isRegularWeightsFile;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 exists:(BOOL)a1 isRegular:(BOOL)a2;

@end
