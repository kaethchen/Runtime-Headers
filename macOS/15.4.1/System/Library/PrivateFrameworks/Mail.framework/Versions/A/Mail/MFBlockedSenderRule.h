@class MFMailbox, EMBlockedSenderManager, NSString, NSColor;

@interface MFBlockedSenderRule : MFMessageRule {
    BOOL _shouldTransferMessage;
    BOOL _shouldNotifyUser;
    BOOL _shouldSendNotification;
    BOOL _isDefaultRule;
    int _autoResponseType;
    NSString *_ruleName;
    long long _flagsToApply;
    NSString *_appleScriptPath;
    NSColor *_color;
    NSString *_playSound;
    MFMailbox *_destinationMailbox;
}

@property (retain, nonatomic) EMBlockedSenderManager *blockedSenderManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)color;
- (void)setColor:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (BOOL)shouldSendNotification;
- (id)ruleName;
- (id)appleScriptPath;
- (int)autoResponseType;
- (id)destinationMailbox;
- (BOOL)doesMessageSatisfyCriteria:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2 successfullyEvaluated:(BOOL *)a3;
- (long long)flagsToApply;
- (id)initWithBlockedSenderManager:(id)a0;
- (BOOL)isDefaultRule;
- (id)playSound;
- (void)setAppleScriptPath:(id)a0;
- (void)setAutoResponseType:(int)a0;
- (void)setDestinationMailbox:(id)a0;
- (void)setFlagsToApply:(long long)a0;
- (void)setIsDefaultRule:(BOOL)a0;
- (void)setPlaySound:(id)a0;
- (void)setRuleName:(id)a0;
- (void)setShouldNotifyUser:(BOOL)a0;
- (void)setShouldSendNotification:(BOOL)a0;
- (void)setShouldTransferMessage:(BOOL)a0;
- (BOOL)shouldNotifyUser;
- (BOOL)shouldTransferMessage;

@end
