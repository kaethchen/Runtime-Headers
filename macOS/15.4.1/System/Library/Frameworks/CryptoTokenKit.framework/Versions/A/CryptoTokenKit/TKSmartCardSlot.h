@class TKSmartCardATR, TKSmartCardSlotProxy, NSString, NSXPCConnection, NSObject, TKSlotParameters;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlot : NSObject {
    NSXPCConnection *_connection;
    TKSlotParameters *_slotParameters;
}

@property long long state;
@property (retain) TKSmartCardATR *ATR;
@property (readonly, nonatomic) TKSmartCardSlotProxy *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property long long previousState;
@property long long shareState;
@property long long powerState;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long maxInputLength;
@property (readonly, nonatomic) long long maxOutputLength;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)screen;
- (void)connectToEndpoint:(id)a0 synchronous:(BOOL)a1 reply:(id /* block */)a2;
- (void)control:(id)a0 data:(id)a1 expectedLength:(unsigned int)a2 reply:(id /* block */)a3;
- (void)getAttrib:(unsigned int)a0 reply:(id /* block */)a1;
- (id)initWithEndpoint:(id)a0 error:(id *)a1;
- (id)makeSmartCard;
- (void)setAttrib:(unsigned int)a0 data:(id)a1 reply:(id /* block */)a2;
- (BOOL)simulateCardReinsertionWithError:(id *)a0;
- (id)slotParameters;
- (id)synchronous:(BOOL)a0 remoteSlotWithErrorHandler:(id /* block */)a1;
- (id)userInteractionForConfirmation;
- (id)userInteractionForStringEntry;

@end
