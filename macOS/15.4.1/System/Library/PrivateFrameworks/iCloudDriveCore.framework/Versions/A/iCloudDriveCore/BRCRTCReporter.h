@class br_pacer, NSArray, NSDictionary, FPRTCReportingSessionManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCRTCReporter : NSObject {
    NSDictionary *_userInfo;
    FPRTCReportingSessionManager *_reportingManager;
    NSDictionary *_globalPayload;
    NSArray *_allowedZoneNamePrefixes;
    NSObject<OS_dispatch_queue> *_pacerQueue;
    br_pacer *_reportingPacer;
    NSMutableDictionary *_events;
}

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)_init;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3;
- (void)_processReportingBatch;
- (BOOL)_shouldRemoveZoneNameWithPayload:(id)a0;
- (id)initWithFPRTCReportingSession:(id)a0;

@end
