@class NSString, SVXDeactivationOptions;

@interface _SVXDeactivationOptionsMutation : NSObject <SVXDeactivationOptionsMutating> {
    SVXDeactivationOptions *_baseModel;
    double _audioSessionDeactivationDelay;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAudioSessionDeactivationDelay : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (id)initWithBaseModel:(id)a0;
- (void)setAudioSessionDeactivationDelay:(double)a0;

@end
