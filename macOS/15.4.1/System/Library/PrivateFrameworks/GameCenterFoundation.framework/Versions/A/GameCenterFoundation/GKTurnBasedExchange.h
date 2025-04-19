@class NSData, NSString, NSArray, NSDate, GKTurnBasedParticipant, GKTurnBasedExchangeInternal, GKDaemonProxy, GKTurnBasedMatch;

@interface GKTurnBasedExchange : NSObject {
    GKDaemonProxy *_daemonProxy;
}

@property (retain) NSArray *recipients;
@property (retain) NSArray *replies;
@property (retain) NSString *exchangeID;
@property (retain) GKTurnBasedParticipant *sender;
@property (retain) NSData *data;
@property (retain) NSDate *timeoutDate;
@property (retain) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain) GKTurnBasedMatch *match;
@property (retain) NSString *exchangeID;
@property (retain) GKTurnBasedParticipant *sender;
@property (retain) NSData *data;
@property (retain) NSDate *timeoutDate;
@property (retain) NSDate *completionDate;
@property (retain) GKTurnBasedExchangeInternal *internal;
@property (retain) GKTurnBasedMatch *match;
@property (readonly) char status;
@property (readonly) NSString *message;
@property (readonly) NSDate *sendDate;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

@end
