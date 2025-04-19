@class NSDate, NSString, GKDaemonProxy, NSData, GKTurnBasedExchangeReplyInternal, GKTurnBasedParticipant, GKTurnBasedMatch;

@interface GKTurnBasedExchangeReply : NSObject {
    GKDaemonProxy *_daemonProxy;
}

@property (retain) GKTurnBasedParticipant *recipient;
@property (retain) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (retain) GKTurnBasedMatch *match;
@property (retain) GKTurnBasedParticipant *recipient;
@property (retain) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (retain) GKTurnBasedMatch *match;
@property (readonly) NSString *message;
@property (readonly) NSDate *replyDate;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)message;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithDaemonProxy:(id)a0;
- (id)initWithInternalRepresentation:(id)a0 daemonProxy:(id)a1;

@end
