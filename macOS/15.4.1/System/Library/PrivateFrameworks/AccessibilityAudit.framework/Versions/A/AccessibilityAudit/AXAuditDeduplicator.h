@class AXAuditDeduplicatorHeuristics, AXAuditDeduplicatorModels, NSObject;
@protocol OS_os_log;

@interface AXAuditDeduplicator : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) AXAuditDeduplicatorModels *models;
@property (retain) AXAuditDeduplicatorHeuristics *heuristics;

+ (void)downloadUIUnderstandingAssetsIfNeeded;
+ (BOOL)isFrameworkAvailable;

- (id)init;
- (void).cxx_destruct;
- (int)findNewIssues:(id)a0 forPlatform:(id)a1;
- (struct CGImage { } *)getCGImageForIssue:(id)a0;
- (BOOL)modelsAvailableForPlatform:(id)a0;

@end
