@class MLMultiArray;

@interface SGMISaliencyModelOutput : NSObject

@property (retain, nonatomic) MLMultiArray *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (double)regularScore;
- (double)salientScore;

@end
