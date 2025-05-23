@class NSString, AFDeviceContextHistoryConfiguration;

@interface _AFDeviceContextHistoryConfigurationMutation : NSObject <AFDeviceContextHistoryConfigurationMutating> {
    AFDeviceContextHistoryConfiguration *_base;
    BOOL _keepsHistory;
    unsigned long long _historyBufferSize;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasKeepsHistory : 1; unsigned char hasHistoryBufferSize : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (BOOL)getKeepsHistory;
- (unsigned long long)getHistoryBufferSize;
- (id)initWithBase:(id)a0;
- (void)setHistoryBufferSize:(unsigned long long)a0;
- (void)setKeepsHistory:(BOOL)a0;

@end
