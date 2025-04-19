@class NSUUID, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MTRPluginProtobufMessageTransportDelegate;

@interface MTRPluginProtobufMessageReceiver : NSObject

@property (retain) NSUUID *sessionID;
@property (weak) id<MTRPluginProtobufMessageTransportDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) NSMutableDictionary *messageSelectors;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 sessionID:(id)a2;

@end
