@class NSString, SVXLEDStatusFactory, SBSDebugInterface;
@protocol SVXPerforming;

@interface SVXServiceCommandHandlerUIShowRequestHandlingStatus : NSObject <SVXSessionActivityListening, SVXServiceCommandHandling> {
    BOOL _shouldShowStatus;
    SBSDebugInterface *_debugInterface;
    id<SVXPerforming> _performer;
    SVXLEDStatusFactory *_ledStatusFactory;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)_clearLEDs;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithSessionManager:(id)a0 performer:(id)a1;
- (id)initWithSessionManager:(id)a0 performer:(id)a1 afPreferencesProvider:(id)a2;
- (BOOL)isCommandUUFR:(id)a0;
- (void)sessionDidResignActiveWithDeactivationContext:(id)a0;

@end
