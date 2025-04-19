@class BRCAutoBugCaptureReporter;
@protocol BRCDatabaseItemSyncErrorCapturing;

@interface BRCLocalItemSyncErrorReporter : NSObject {
    BRCAutoBugCaptureReporter *_abcReporter;
    id<BRCDatabaseItemSyncErrorCapturing> _dbItemSyncErrorCapturer;
}

- (void).cxx_destruct;
- (void)_reportSyncErrorForItemWithRowID:(unsigned long long)a0 captureType:(int)a1 error:(id)a2 underlyingError:(id)a3 serviceCode:(int)a4 problemType:(int)a5 syncSubType:(id)a6;
- (void)clearDownloadErrorForItemWithRowID:(long long)a0;
- (void)clearUploadErrorForItemWithRowID:(long long)a0;
- (id)initWithABCReporter:(id)a0 dbItemSyncErrorCapturer:(id)a1;
- (void)reportDownloadErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 underlyingError:(id)a2;
- (void)reportSyncUpErrorForItemWithRowID:(unsigned long long)a0 captureType:(int)a1 error:(id)a2 underlyingError:(id)a3;
- (void)reportSyncUpErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 underlyingError:(id)a2;
- (void)reportUploadErrorForItemWithRowID:(unsigned long long)a0 captureType:(int)a1 error:(id)a2 underlyingError:(id)a3;
- (void)reportUploadErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 underlyingError:(id)a2;

@end
