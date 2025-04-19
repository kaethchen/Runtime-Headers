@class NSURL;

@interface _VZVirtualMachineConfigurationEncoder : NSObject {
    NSURL *_baseURL;
}

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)dataWithConfiguration:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
