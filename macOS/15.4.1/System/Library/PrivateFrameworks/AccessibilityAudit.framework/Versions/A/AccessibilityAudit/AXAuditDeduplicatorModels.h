@class NSObject, UIUDeduplicator;
@protocol OS_dispatch_queue, OS_os_log;

@interface AXAuditDeduplicatorModels : NSObject

@property (retain) UIUDeduplicator *deduplicator;
@property long long activePlatform;
@property (retain) NSObject<OS_dispatch_queue> *dedupeQueue;
@property (retain) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (id)packIssueRects:(id)a0;
- (id)createUIUScreenShotForImage:(struct CGImage { } *)a0 withTimestamp:(id)a1;
- (int)deduplicateIssues:(id)a0 onImage:(struct CGImage { } *)a1 forPlatform:(id)a2;
- (int)deduplicateIssues:(id)a0 onImage:(struct CGImage { } *)a1 forUIUPlatform:(long long)a2;
- (BOOL)determineUIPlatform:(id)a0 outPlatform:(long long *)a1;

@end
