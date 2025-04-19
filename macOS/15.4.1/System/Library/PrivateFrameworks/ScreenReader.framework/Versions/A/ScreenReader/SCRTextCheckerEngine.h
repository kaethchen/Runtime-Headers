@class NSIndexSet, NSTimer, SCRElement, NSString, SCRApplication;

@interface SCRTextCheckerEngine : NSObject <SCRApplicationIntensiveTaskProtocol>

@property (class, readonly, nonatomic) NSIndexSet *defaultIssueKindFilter;

@property (nonatomic) BOOL _stop;
@property (retain, nonatomic) NSTimer *_announcementTimer;
@property (retain, nonatomic) NSTimer *_soundTimer;
@property (retain, nonatomic) NSIndexSet *issueKindFilter;
@property (retain, nonatomic) SCRElement *startElement;
@property (nonatomic) unsigned long long startPosition;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL shouldEchoInProgress;
@property (nonatomic) BOOL shouldBeCancellable;
@property (readonly, nonatomic) long long eventTag;
@property (readonly, nonatomic) SCRApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_appThreadHandleSearchResult:(id)a0 data:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (void)_initEchoTimers;
- (void)_echoSearchCancellation;
- (void)_enumerateTextIssuesInDirection:(long long)a0 withBlock:(id /* block */)a1;
- (void)_handleEndOfEnumeration;
- (BOOL)_shouldStartEnumeration;
- (void)enumerateTextIssuesInDirection:(long long)a0 withBlock:(id /* block */)a1;
- (void)enumerateTextIssuesWithBlock:(id /* block */)a0;
- (id)initWithStartElement:(id)a0;
- (id)initWithStartElement:(id)a0 issueKindFilter:(id)a1;
- (void)selectResult:(id)a0 request:(id)a1;

@end
