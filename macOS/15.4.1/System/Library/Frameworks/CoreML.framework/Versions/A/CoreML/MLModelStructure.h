@class MLModelStructureProgram, MLModelStructurePipeline, MLModelStructureNeuralNetwork;

@interface MLModelStructure : NSObject

@property (readonly, nonatomic) MLModelStructureNeuralNetwork *neuralNetwork;
@property (readonly, nonatomic) MLModelStructureProgram *program;
@property (readonly, nonatomic) MLModelStructurePipeline *pipeline;

+ (void)loadContentsOfURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadModelAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (id)loadModelStructureFromCompiledArchive:(void *)a0 path:(struct Path { struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *x0; void *x1; struct __compressed_pair<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel> *, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *x0; } x2; } x0; })a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithNeuralNetwork:(id)a0;
- (id)initWithNeuralNetwork:(id)a0 program:(id)a1 pipeline:(id)a2;
- (id)initWithPipeline:(id)a0;
- (id)initWithProgram:(id)a0;

@end
