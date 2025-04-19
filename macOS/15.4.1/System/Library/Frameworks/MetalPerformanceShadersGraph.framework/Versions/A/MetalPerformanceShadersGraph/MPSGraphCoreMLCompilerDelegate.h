@class NSData, NSURL, NSString;

@interface MPSGraphCoreMLCompilerDelegate : MPSGraphObject {
    NSData *coreMLBytecode;
    NSURL *coreMLDirectory;
    NSString *mpsgraphPackageName;
}

- (void).cxx_destruct;
- (id)getInitializedCoreMLBytecode;
- (id)getInitializedCoreMLBytecodeWithPayloadPrefix:(id)a0 delegateId:(id)a1;
- (id)getMpsgraphPackageName;
- (id)getSegmentedCoreMLBytecode;
- (id)getSegmentedCoreMLBytecodeWithDelegateId:(id)a0;
- (id)initWithCoreMLBytecode:(id)a0 coreMLDirectory:(id)a1;

@end
