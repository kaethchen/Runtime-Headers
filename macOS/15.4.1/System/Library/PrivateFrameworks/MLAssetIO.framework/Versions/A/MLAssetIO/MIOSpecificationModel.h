@class NSString, MIOParserContext, NSData, MIOModelDescription, MIOVersionInfo, NSArray;

@interface MIOSpecificationModel : NSObject <MIOModeling> {
    struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram *__value_; } __ptr_; } _irProgram;
    struct vector<MIOFunctionInfo, std::allocator<MIOFunctionInfo>> { struct MIOFunctionInfo *__begin_; struct MIOFunctionInfo *__end_; struct __compressed_pair<MIOFunctionInfo *, std::allocator<MIOFunctionInfo>> { struct MIOFunctionInfo *__value_; } __end_cap_; } _functions;
}

@property (readonly, copy, nonatomic) NSData *specificationData;
@property (readonly, copy, nonatomic) MIOParserContext *parserContext;
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
- (id).cxx_construct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (unsigned long long)_indexForFunctionNamed:(id)a0;
- (id)computePrecisionForFunctionNamed:(id)a0;
- (id)initWithMessageStream:(struct CodedInputStream { char *x0; char *x1; struct ZeroCopyInputStream *x2; int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; int x8; int x9; int x10; int x11; int x12; BOOL x13; struct DescriptorPool *x14; struct MessageFactory *x15; } *)a0 parserContext:(id)a1 error:(id *)a2;
- (id)initWithSpecificationData:(id)a0 parserContext:(id)a1 error:(id *)a2;
- (id)neuralNetworkLayerHistogramForFunctionNamed:(id)a0;
- (id)programOperationHistogramForFunctionNamed:(id)a0;
- (id)storagePrecisionForFunctionNamed:(id)a0;

@end
