@class UNUserNotificationCenter, NSString, ECAngleBracketIDHash, MSUserNotificationCenterAnalyticsLogger, MCMessage, EMReadLater;

@interface MFPostUserNotificationOperation : NSOperation

@property (readonly, copy, nonatomic) NSString *snippet;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, copy, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (nonatomic) long long postType;
@property (nonatomic) EMReadLater *readLater;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MSUserNotificationCenterAnalyticsLogger *analyticsLogger;
@property (readonly, nonatomic) MCMessage *message;
@property (readonly, nonatomic) NSString *identifier;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)_coalesceThreadID;
- (id)initWithTitle:(id)a0 message:(id)a1 identifier:(id)a2 snippet:(id)a3 userNotificationCenter:(id)a4 postType:(long long)a5 analyticsLogger:(id)a6;
- (id)initWithTitle:(id)a0 message:(id)a1 identifier:(id)a2 snippet:(id)a3 userNotificationCenter:(id)a4 postType:(long long)a5 readLater:(id)a6 analyticsLogger:(id)a7;
- (id)initWithTitle:(id)a0 message:(id)a1 identifier:(id)a2 snippet:(id)a3 userNotificationCenter:(id)a4 readLater:(id)a5;

@end
