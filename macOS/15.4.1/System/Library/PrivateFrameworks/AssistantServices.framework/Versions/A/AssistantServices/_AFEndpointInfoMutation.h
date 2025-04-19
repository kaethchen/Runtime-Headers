@class NSString, AFEndpointInfo;

@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating> {
    AFEndpointInfo *_base;
    NSString *_identifier;
    NSString *_mediaRouteIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (BOOL)isDirty;
- (id)getIdentifier;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getMediaRouteIdentifier;
- (id)initWithBase:(id)a0;

@end
