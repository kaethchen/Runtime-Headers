@class NSString, NSData, SCDAAdvertisementContext;

@interface _SCDAAdvertisementContextMutation : NSObject <SCDAAdvertisementContextMutating> {
    SCDAAdvertisementContext *_base;
    unsigned long long _generation;
    NSData *_contextData;
    double _contextFetchDelay;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasContextData : 1; unsigned char hasContextFetchDelay : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setGeneration:(unsigned long long)a0;
- (void)setContextData:(id)a0;
- (id)getContextData;
- (double)getContextFetchDelay;
- (unsigned long long)getGeneration;
- (id)initWithBase:(id)a0;
- (void)setContextFetchDelay:(double)a0;

@end
