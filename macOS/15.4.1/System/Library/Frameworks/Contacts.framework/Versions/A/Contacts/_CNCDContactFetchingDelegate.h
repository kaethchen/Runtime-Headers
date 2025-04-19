@class NSString, NSException;

@interface _CNCDContactFetchingDelegate : NSObject <CNRetryDelegate> {
    NSString *_participle;
}

@property (readonly) NSException *exceptionToRethrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (BOOL)shouldRethrowException:(id)a0;

- (void).cxx_destruct;
- (long long)maximumNumberOfAttemptsForRetry:(id)a0;
- (double)retry:(id)a0 delayAfterError:(id)a1 onAttempt:(long long)a2;
- (double)retry:(id)a0 delayAfterException:(id)a1 onAttempt:(long long)a2;
- (void)retry:(id)a0 didSucceedWithResult:(id)a1;
- (BOOL)retry:(id)a0 shouldContinueAfterError:(id)a1 onAttempt:(long long)a2;
- (BOOL)retry:(id)a0 shouldContinueAfterException:(id)a1 onAttempt:(long long)a2;
- (void)retry:(id)a0 willDelayFor:(double)a1 afterAttempt:(long long)a2;
- (id)initWithParticiple:(id)a0;
- (void)retry:(id)a0 didFailWithError:(id)a1;

@end
