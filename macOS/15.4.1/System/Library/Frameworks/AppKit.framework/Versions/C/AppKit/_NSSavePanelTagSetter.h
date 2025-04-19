@class NSTimer, NSString, NSURL, NSArray, NSSet, NSOperationQueue, NSDictionary, NSMutableSet;

@interface _NSSavePanelTagSetter : NSObject <NSFilePresenter> {
    NSOperationQueue *queue;
    NSURL *_urlToTag;
    BOOL _useSecurityScopedURL;
    NSArray *tagNames;
    NSDictionary *initialFileAttributes;
    NSMutableSet *urlsWithTagsSet;
    NSTimer *timer;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prefixForURL:(id)a0 nameFieldString:(id)a1;
+ (id)_relevantFileAttributesForURL:(id)a0 cached:(BOOL)a1;
+ (void)_tagSetterFinished:(id)a0;
+ (void)_waitForURL:(id)a0 useSecurityScopedURL:(BOOL)a1 withNameFieldString:(id)a2 thenSetTagNames:(id)a3;

- (void)dealloc;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)presentedSubitemDidAppearAtURL:(id)a0;
- (BOOL)_isRelevantURL:(id)a0;
- (void)_setTagsForURL:(id)a0;
- (id)_URLForDirectoryToWatch;
- (void)_asynchronouslyWaitForURLToChangeThenSetTags;
- (BOOL)_checkAndSetTagsForURL:(id)a0 usingAttributeCache:(BOOL)a1;
- (void)_doneWatching;
- (void)_enumerateURLsUsingBlock:(id /* block */)a0;
- (id)_initWithTagNames:(id)a0;
- (id)_initWithURL:(id)a0 useSecurityScopedURL:(BOOL)a1 tagNames:(id)a2;
- (void)_performFirstCheck;
- (void)_scheduleStopWatching;
- (id)_snapshotOfFileSystemState;
- (void)_startWatching;
- (void)_stopWatching;

@end
