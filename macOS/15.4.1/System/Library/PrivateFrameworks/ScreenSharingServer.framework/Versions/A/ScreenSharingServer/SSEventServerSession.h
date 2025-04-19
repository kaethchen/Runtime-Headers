@class NSMutableSet, NSObject;
@protocol SSEventServerSessionDelegate, SSRFBServerConnectionProviding;

@interface SSEventServerSession : NSObject

@property (readonly, nonatomic) NSObject<SSRFBServerConnectionProviding> *serverConnection;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) NSMutableSet *allowedParticipants;
@property (weak, nonatomic) id<SSEventServerSessionDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleInvalidation:(id)a0;
- (void)controlStateChanged:(BOOL)a0 forParticipant:(id)a1;
- (void)displayShared:(unsigned int)a0;
- (void)handleOutgoingData:(id)a0;
- (id)initWithServerConnection:(id)a0;
- (BOOL)receivedData:(id)a0 fromParticipant:(id)a1 error:(id *)a2;
- (void)screenSharingHasEnded;
- (void)windowShared:(unsigned int)a0;

@end
