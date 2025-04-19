@class NSArray, NSMutableArray;
@protocol ICSessionManagerProtocol;

@interface ICSessionManager : NSObject {
    BOOL _sessionConnectionAdded;
    NSMutableArray *_sessions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionsLock;
}

@property (weak, nonatomic) id<ICSessionManagerProtocol> delegate;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) NSArray *connections;
@property (readonly, nonatomic) unsigned long long sessionCount;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)sessionWithConnection:(id)a0;
- (void)addNotifications:(id)a0 toSessionWithConnection:(id)a1;
- (id)connectionsMonitoringNotification:(id)a0;
- (id)connectionsMonitoringObjectID:(id)a0;
- (BOOL)createSessionWithConnection:(id)a0;
- (unsigned long long)currentSessionCount;
- (void)remNotifications:(id)a0 fromSessionWithConnection:(id)a1;
- (void)removeAllSessions;
- (unsigned long long)removeSessionWithConnection:(id)a0;
- (unsigned long long)removeSessionsWithProcessIdentifier:(id)a0;

@end
