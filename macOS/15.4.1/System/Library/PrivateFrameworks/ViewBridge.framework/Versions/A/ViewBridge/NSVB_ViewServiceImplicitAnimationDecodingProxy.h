@class NSString, NSViewServiceMarshal, NSVB_ViewAnimationAttributes;

@interface NSVB_ViewServiceImplicitAnimationDecodingProxy : NSVB_TargetedProxy <NSVB_ViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {
    NSVB_ViewAnimationAttributes *_animationAttributes;
    struct __CFSet { } *animatedSelectors;
}

@property (retain) NSViewServiceMarshal *serviceMarshal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyDecodingAnimationsForTarget:(id)a0 withServiceMarshal:(id)a1;

@end
