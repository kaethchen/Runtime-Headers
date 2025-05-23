@class NSString, _PASDatabaseJournalFile, NSObject;
@protocol OS_dispatch_queue;

@interface _PASDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}

@property (readonly, nonatomic) BOOL journaling;

+ (id /* block */)_binderForDictionary:(id)a0;
+ (id)_journalPathForDbPath:(id)a0;
+ (id)journalForInMemoryDb;
+ (id)journalWithDbPath:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_executeFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2;
- (BOOL)startJournaling;
- (BOOL)_executeNextRecordFromFile:(id)a0 onDb:(id)a1 becameLocked:(BOOL *)a2 deleteFile:(BOOL *)a3;
- (BOOL)deleteAllJournaledQueries;
- (id)directoryPath;
- (BOOL)executeQueriesOnDatabase:(id)a0;
- (void)runQuery:(id)a0 values:(id)a1 onDb:(id)a2;
- (BOOL)stopJournaling;

@end
