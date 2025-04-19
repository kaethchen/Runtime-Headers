@class NSString, NSMutableDictionary, NSOperationQueue, NSMutableSet, MFSnippetCalculator, NSObject;
@protocol OS_os_log;

@interface MFSnippetManager : NSObject <MFSnippetCalculatorDelegate> {
    NSMutableSet *_messagesNeedingBodies;
    id _pendingSnippetsLock;
    NSMutableDictionary *_pendingSnippetDictionariesByStore;
    BOOL _queuedUpdate;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFSnippetCalculator *snippetCalculator;
@property (readonly, nonatomic) NSOperationQueue *snippetCommitQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)_commitPendingSnippets;
- (void)_messageBodyDataAvailable:(id)a0;
- (void)_queueCommitPendingSnippets;
- (id)fetchSnippetsForMessages:(id)a0;
- (void)snippetCalculator:(id)a0 didCalculateSnippet:(id)a1 forMessage:(id)a2;
- (void)snippetCalculator:(id)a0 didSkipMessages:(id)a1;

@end
