@class NFSession, NSString, NSObject, PKFieldProperties;
@protocol OS_dispatch_queue, OS_dispatch_source, NFSession;

@interface PKFieldPropertiesProbe : NSObject <NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKFieldProperties *_properties;
    id /* block */ _completion;
    long long _type;
    NSObject<OS_dispatch_source> *_timeout;
    NSObject<NFSession> *_startHandle;
    NFSession *_session;
    BOOL _started;
    BOOL _resolved;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createProbeForProperties:(id)a0 queue:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_acceptSession:(id)a0;
- (id)_initWithProperties:(id)a0 queue:(id)a1;
- (void)_resolve;
- (void)beginWithCompletion:(id /* block */)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;
- (void)session:(id)a0 didEndTransaction:(id)a1;
- (void)sessionDidEndUnexpectedly:(id)a0;

@end
