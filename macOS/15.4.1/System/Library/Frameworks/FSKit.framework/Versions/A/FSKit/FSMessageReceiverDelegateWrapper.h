@class NSArray, NSError, NSLocale, NSObject;
@protocol FSTaskMessageOperations;

@interface FSMessageReceiverDelegateWrapper : NSObject <FSTaskOperations>

@property (readonly) BOOL hasCompleted;
@property (readonly) BOOL hasStarted;
@property (retain) NSError *completedError;
@property (readonly) NSObject<FSTaskMessageOperations> *delegate;
@property (readonly) NSLocale *locale;
@property (readonly) NSArray *preferredLanguages;

- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didStart;
- (void)completed:(id)a0 reply:(id /* block */)a1;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)getLocalizationSetup:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 Locale:(id)a1 preferredLanguages:(id)a2;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;

@end
