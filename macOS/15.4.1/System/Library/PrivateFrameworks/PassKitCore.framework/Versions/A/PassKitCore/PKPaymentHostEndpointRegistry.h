@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentHostEndpointRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_registrySerialQueue;
    NSMutableDictionary *_hostIdentifierToEndpointMap;
    NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 processIdentifier:(int)a2;
- (void)removeListenerEndpointsForProcessIdentifier:(int)a0;
- (id)takeListenerEndpointForHostIdentifier:(id)a0;

@end
