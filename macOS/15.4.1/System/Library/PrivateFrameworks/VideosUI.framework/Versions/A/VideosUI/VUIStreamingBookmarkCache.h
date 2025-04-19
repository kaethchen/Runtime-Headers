@class NSMutableDictionary;

@interface VUIStreamingBookmarkCache : NSObject {
    NSMutableDictionary *_bookmarkCacheStore;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)addBookmarkForReferenceID:(id)a0 canonicalID:(id)a1 absoluteResumeTime:(id)a2 absoluteBookmarkTimestamp:(id)a3 relativeResumeTime:(id)a4 relativeBookmarkTimestamp:(id)a5;
- (void)removeBookmarkForCanonicalID:(id)a0;
- (void)removeBookmarkForReferenceID:(id)a0;
- (void)resumeTimeInfoForReferenceID:(id)a0 outAbsoluteResumeTime:(id *)a1 outAbsoluteTimestamp:(id *)a2 outMainContentRelativeResumeTime:(id *)a3 outMainContentRelativeTimestamp:(id *)a4;

@end
