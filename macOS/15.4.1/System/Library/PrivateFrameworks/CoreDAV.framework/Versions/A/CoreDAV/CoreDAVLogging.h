@class NSObject, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue;

@interface CoreDAVLogging : NSObject {
    NSMutableDictionary *_logDelegates;
    NSMapTable *_primaryLogDelegate;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;

- (id)init;
- (void).cxx_destruct;
- (id)logHandleForAccountInfoProvider:(id)a0;
- (void)addLogDelegate:(id)a0 forAccountInfoProvider:(id)a1;
- (void)removeLogDelegate:(id)a0 forAccountInfoProvider:(id)a1;
- (id)_delegatesToLogForProvider:(id)a0;
- (void)_logOldMessageForAccountInfoProvider:(id)a0 level:(unsigned char)a1 format:(const char *)a2;
- (BOOL)_shouldOutputAtLevel:(long long)a0 forAccountInfoProvider:(id)a1;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)a0;
- (void)logDiagnosticForProvider:(id)a0 withLevel:(long long)a1 format:(id)a2 args:(char *)a3;
- (BOOL)shouldLogAtLevel:(long long)a0 forAccountInfoProvider:(id)a1;

@end
