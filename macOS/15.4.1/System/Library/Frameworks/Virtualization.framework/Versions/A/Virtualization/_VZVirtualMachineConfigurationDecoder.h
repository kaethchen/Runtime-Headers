@class NSURL;
@protocol _VZVirtualMachineConfigurationDecoderDelegate;

@interface _VZVirtualMachineConfigurationDecoder : NSObject {
    NSURL *_baseURL;
}

@property (weak) id<_VZVirtualMachineConfigurationDecoderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)configurationFromData:(id)a0 format:(unsigned long long *)a1 error:(id *)a2;

@end
