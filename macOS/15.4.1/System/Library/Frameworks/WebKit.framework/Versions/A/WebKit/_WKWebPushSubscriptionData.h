@class NSURL, NSData, NSString;

@interface _WKWebPushSubscriptionData : NSObject <WKObject> {
    struct ObjectStorage<API::WebPushSubscriptionData> { struct type { unsigned char __lx[96]; } data; } _data;
}

@property (readonly, nonatomic) NSURL *endpoint;
@property (readonly, nonatomic) NSData *applicationServerKey;
@property (readonly, nonatomic) NSData *authenticationSecret;
@property (readonly, nonatomic) NSData *ecdhPublicKey;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct Ref<API::WebPushSubscriptionData, WTF::RawPtrTraits<API::WebPushSubscriptionData>, WTF::DefaultRefDerefTraits<API::WebPushSubscriptionData>> { struct WebPushSubscriptionData *x0; })_protectedData;

@end
