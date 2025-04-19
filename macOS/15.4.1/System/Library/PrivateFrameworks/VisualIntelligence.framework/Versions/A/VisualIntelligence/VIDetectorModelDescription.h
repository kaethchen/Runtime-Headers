@class NSURL, NSString, NSArray;

@interface VIDetectorModelDescription : NSObject

@property (readonly, copy, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSArray *modelOutputs;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputImageSize;

- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0 modelID:(id)a1 modelOutputs:(id)a2 inputImageSize:(struct CGSize { double x0; double x1; })a3;

@end
