@class NSString, SCDAPerceptualAudioHash, NSData;

@interface _SCDAPerceptualAudioHashMutation : NSObject <SCDAPerceptualAudioHashMutating> {
    SCDAPerceptualAudioHash *_base;
    NSData *_data;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasData : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isDirty;
- (id)getData;
- (id)initWithBase:(id)a0;

@end
