@class NSString, MIOModelDescription, NSArray, MIOVersionInfo, NSObject;
@protocol MIOModeling;

@interface MIOModel : NSObject <NSMutableCopying>

@property (retain, nonatomic) NSObject<MIOModeling> *modelImpl;
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (readonly, copy, nonatomic) MIOModelDescription *modelDescription;
@property (readonly, copy, nonatomic) NSArray *layers;
@property (readonly, copy, nonatomic) NSArray *subModels;
@property (readonly, nonatomic) void *irProgram;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)setModelDescription:(id)a0;
- (void)MIOFindProtobufFieldsDummyObjC;
- (id)computePrecisionForFunctionNamed:(id)a0;
- (id)initWithMessageStream:(struct CodedInputStream { char *x0; char *x1; struct ZeroCopyInputStream *x2; int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; int x8; int x9; int x10; int x11; int x12; BOOL x13; struct DescriptorPool *x14; struct MessageFactory *x15; } *)a0 parserContext:(id)a1 error:(id *)a2;
- (id)initWithModeling:(id)a0 error:(id *)a1;
- (id)layerHistogram;
- (id)neuralNetworkLayerHistogramForFunctionNamed:(id)a0;
- (id)programOperationHistogramForFunctionNamed:(id)a0;
- (id)storagePrecisionForFunctionNamed:(id)a0;

@end
