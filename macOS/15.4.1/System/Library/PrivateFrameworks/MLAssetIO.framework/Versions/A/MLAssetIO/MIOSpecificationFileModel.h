@class NSString, MIOModelDescription, NSURL, NSArray, MIOVersionInfo, NSObject;
@protocol MIOModeling;

@interface MIOSpecificationFileModel : NSObject <MIOModeling>

@property (copy, nonatomic) NSURL *modelURL;
@property (copy, nonatomic) NSObject<MIOModeling> *specificationModel;
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (copy, nonatomic) MIOModelDescription *modelDescription;
@property (readonly, copy, nonatomic) NSArray *layers;
@property (readonly, copy, nonatomic) NSArray *subModels;
@property (readonly, nonatomic) void *irProgram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithModel:(id)a0;
- (id)computePrecisionForFunctionNamed:(id)a0;
- (id)neuralNetworkLayerHistogramForFunctionNamed:(id)a0;
- (id)programOperationHistogramForFunctionNamed:(id)a0;
- (id)storagePrecisionForFunctionNamed:(id)a0;

@end
