@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRLTTranslationService : NSObject

@property (class, readonly) NSMutableDictionary *connections;

@property (retain, nonatomic) NSXPCConnection *queue_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (nonatomic) BOOL interrupted;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic, getter=isLoopback) BOOL loopback;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (id)connectionForServiceIdentifier:(id)a0;
+ (id)connectionsLock;
+ (id)connectionForLoopbackService:(id)a0;
+ (id)serviceForIdentifier:(id)a0 input:(BOOL)a1;
+ (id)serviceForIdentifier:(id)a0 input:(BOOL)a1 loopback:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (void)_queue_resume;
- (void)_queue_invalidate;
- (void)_queue_loadBundle;
- (id)_queue_serviceProxy;
- (void)brailleForText:(id)a0 parameters:(id)a1 withReply:(id /* block */)a2;
- (id)initWithServiceIdentifier:(id)a0 connection:(id)a1;
- (void)textForBraille:(id)a0 parameters:(id)a1 withReply:(id /* block */)a2;

@end
