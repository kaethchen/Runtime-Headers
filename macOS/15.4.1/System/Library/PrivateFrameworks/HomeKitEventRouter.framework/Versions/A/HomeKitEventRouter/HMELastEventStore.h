@class NSString, NSObject;
@protocol OS_os_log;

@interface HMELastEventStore : NSObject <HMEEventPersistence> {
    NSObject<OS_os_log> *_logger;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *insertEventPreparedStatement;
    struct sqlite3_stmt { } *replaceEventIfMoreRecentOrDifferentSourcePreparedStatement;
    struct sqlite3_stmt { } *selectEventByKeyPreparedStatement;
    struct sqlite3_stmt { } *deleteEventByKeyPreparedStatement;
    struct sqlite3_stmt { } *deleteEventByKeyLikePreparedStatement;
    struct sqlite3_stmt { } *deleteBeforeTimestampPreparedStatement;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSString *fileName;
@property (readonly) BOOL useWal;
@property (retain) NSString *readJournalMode;
@property (retain) NSString *integrityCheckError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (id)initInMemoryStore;
- (BOOL)startup;
- (id)eventsForTopicFilters:(id)a0;
- (id)lastEventForTopic:(id)a0;
- (void)writer:(id)a0 saveEvent:(id)a1 topic:(id)a2;
- (void)resetEventStore;
- (void)resetWildcardTopics:(id)a0;
- (id)eventsForTopicFilters:(id)a0 sinceReferenceTimestamp:(double)a1;
- (id)initWithFileName:(id)a0 useWal:(BOOL)a1;
- (void)resetBeforeReferenceTimestamp:(double)a0;
- (void)resetTopic:(id)a0;
- (BOOL)writer:(id)a0 saveEventIfAllowed:(id)a1 topic:(id)a2;
- (BOOL)writer:(id)a0 saveEventIfDifferent:(id)a1 topic:(id)a2;

@end
