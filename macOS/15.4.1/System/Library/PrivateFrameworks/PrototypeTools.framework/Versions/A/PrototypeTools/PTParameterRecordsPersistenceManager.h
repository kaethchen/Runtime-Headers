@class NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface PTParameterRecordsPersistenceManager : NSObject {
    NSTimer *_writeTimer;
    NSObject<OS_dispatch_queue> *_parameterRecordsArchiveQueue;
}

@property (retain, nonatomic) NSString *path;

- (id)init;
- (void).cxx_destruct;
- (void)_writeToDiskWithParameterRecords:(id)a0;
- (id)createParameterRecordsFromArchiveDictionary;
- (void)writeToDisk:(id)a0;

@end
