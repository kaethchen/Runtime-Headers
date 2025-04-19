@class NSString, MLModelStructurePath, NSArray;

@interface MLModelStructureNeuralNetworkLayer : NSObject

@property (readonly, nonatomic) MLModelStructurePath *path;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSArray *inputNames;
@property (readonly, copy, nonatomic) NSArray *outputNames;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(id)a1 inputNames:(id)a2 outputNames:(id)a3 path:(id)a4;

@end
