@class NSString, GCSystemGesturesState, GCSystemGestureXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCSystemGestureXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    GCSystemGesturesState *_initialSystemGesture;
    GCSystemGestureXPCProxyClientEndpoint *_materializedObject;
    BOOL _isSystemGestureObserver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 initialSystemGesture:(id)a1 isSystemGestureObserver:(BOOL)a2;
- (id)materializeWithContext:(id)a0;

@end
