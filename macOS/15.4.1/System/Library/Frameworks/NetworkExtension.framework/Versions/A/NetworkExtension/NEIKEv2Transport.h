@class NSString, NWAddressEndpoint, NWInterface, NSMutableSet, NSObject, NSMutableArray;
@protocol NEIKEv2WildcardTransportDelegate, NEIKEv2PacketDelegate, OS_dispatch_source, OS_nw_connection, OS_dispatch_queue;

@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver> {
    BOOL _connected;
    BOOL _cancelled;
    BOOL _wildcardPreventsInvalidation;
    NWAddressEndpoint *_local;
    NWAddressEndpoint *_remote;
    NWInterface *_interface;
    unsigned long long _transportType;
    id<NEIKEv2PacketDelegate> _packetDelegate;
    NSObject<OS_nw_connection> *_connection;
    NSMutableArray *_connectedBlocks;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSMutableSet *_clients;
    id<NEIKEv2WildcardTransportDelegate> _wildcardDelegate;
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)receivePacketData:(id)a0;

@end
