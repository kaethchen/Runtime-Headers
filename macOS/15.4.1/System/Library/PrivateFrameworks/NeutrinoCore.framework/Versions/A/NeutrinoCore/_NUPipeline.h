@class NSString, NSArray, NUIdentifier, NSMutableDictionary, NSMutableArray;

@interface _NUPipeline : NSObject <NUPipeline, NUMutablePipeline> {
    NSMutableArray *_inputChannels;
    NSMutableArray *_outputChannels;
    NSMutableDictionary *_inputPorts;
    NSMutableDictionary *_outputPorts;
    NSMutableArray *_innerPipelines;
}

@property (readonly, nonatomic) NSString *alias;
@property (nonatomic) _NUPipeline *outerPipeline;
@property (readonly, nonatomic) NSString *compactDescription;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *innerPipelines;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly, copy, nonatomic) NSArray *inputChannels;
@property (readonly, copy, nonatomic) NSArray *outputChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildFilterPipelineWithName:(id)a0 error:(out id *)a1;
+ (id)buildPipelineWithIdentifier:(id)a0 error:(out id *)a1;
+ (id)buildSourcePipeline;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)_description;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (BOOL)_isPrivate;
- (id)_compactDescription;
- (id)addCIFilterPipelineWithName:(id)a0 error:(out id *)a1;
- (void)addInnerPipeline:(id)a0;
- (id)addInputChannel:(id)a0;
- (id)addOutputChannel:(id)a0;
- (id)addPipelineWithIdentifier:(id)a0 error:(out id *)a1;
- (id)addSourcePipeline;
- (BOOL)bind:(id)a0 to:(id)a1 error:(out id *)a2;
- (BOOL)bindInputChannel:(id)a0 to:(id)a1 error:(out id *)a2;
- (BOOL)bindInputPort:(id)a0 to:(id)a1 error:(out id *)a2;
- (BOOL)canConnectInputPort:(id)a0 toOutputPort:(id)a1 error:(out id *)a2;
- (BOOL)connect:(id)a0 input:(id)a1 to:(id)a2 error:(out id *)a3;
- (BOOL)connect:(id)a0 input:(id)a1 to:(id)a2 key:(id)a3 error:(out id *)a4;
- (BOOL)connect:(id)a0 input:(id)a1 to:(id)a2 output:(id)a3 error:(out id *)a4;
- (BOOL)connect:(id)a0 to:(id)a1 output:(id)a2 error:(out id *)a3;
- (BOOL)connectInputPort:(id)a0 toOutputPort:(id)a1 error:(out id *)a2;
- (id)evaluateOutputChannel:(id)a0 error:(out id *)a1;
- (id)evaluateOutputPort:(id)a0 error:(out id *)a1;
- (id)inputChannelMatching:(id)a0;
- (id)inputPortForChannel:(id)a0;
- (id)inputPortMatching:(id)a0;
- (id)outputChannelMatching:(id)a0;
- (id)outputPortForChannel:(id)a0;
- (id)outputPortMatching:(id)a0;
- (BOOL)validateInputPort:(id)a0 error:(out id *)a1;
- (BOOL)validateOutputPort:(id)a0 error:(out id *)a1;

@end
