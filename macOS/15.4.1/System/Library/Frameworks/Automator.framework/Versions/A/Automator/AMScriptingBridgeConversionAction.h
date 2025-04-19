@class SBApplication;

@interface AMScriptingBridgeConversionAction : AMBundleAction

@property (retain, nonatomic) SBApplication *sbApplication;
@property (readonly, nonatomic) SBApplication *scriptingBridgeApplication;

- (void).cxx_destruct;
- (id)descriptorForOutputObject:(id)a0;
- (BOOL)isTypeValidForObject:(id)a0;
- (id)outputObjectArrayForInput:(id)a0;
- (id)runWithInput:(id)a0 error:(id *)a1;
- (id)sbObjectForDescriptor:(id)a0;

@end
