@class NSString;

@interface IFMessageElement : IFInstallQueueElement {
    NSString *_notificationName;
    NSString *_message;
}

+ (void)addStatusMsgElementToQ:(id)a0 withKey:(id)a1;
+ (void)addPhaseMsgElementToQ:(id)a0 withKey:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (long long)run;
- (id)logDescription;
- (id)_descriptionForPhase:(int)a0 packageTitle:(id)a1;
- (id)initWithEndJobsDidEndMessage:(id)a0;
- (id)initWithEndJobsWillBeginMessage:(id)a0;
- (id)initWithInstallCompletedMessage:(id)a0;
- (id)initWithInstallJobCompletedMessage:(id)a0;
- (id)initWithInstallJobStartedMessage:(id)a0;
- (id)initWithPackageInstallCompletedMessage:(id)a0;
- (id)initWithPackageInstallStartedMessage:(id)a0;
- (id)initWithPhase:(int)a0 andTitle:(id)a1;
- (id)initWithPhaseMessage:(id)a0;
- (id)initWithStatusMessage:(id)a0;

@end
