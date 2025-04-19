@class BRCTapToRadarManager, BRCAnalyticsReporter;

@interface BRCBouncingAnalyzer : NSObject {
    BRCTapToRadarManager *_tapToRadarManager;
    BRCAnalyticsReporter *_analyticsReporter;
}

- (void).cxx_destruct;
- (void)close;
- (BOOL)_isGenericUntitledFileName:(id)a0;
- (int)analyzeBouncingOfItem:(id)a0 withServerItem:(id)a1 bounceReason:(int)a2;
- (void)analyzeBouncingOfItem:(id)a0 withTemplateItem:(id)a1;
- (BOOL)analyzeServerBouncingOfItem:(id)a0 withServerItem:(id)a1;
- (BOOL)analyzeServerBouncingOriginalRecord:(id)a0 savedRecord:(id)a1;
- (id)initWithTapToRadarManager:(id)a0 analyticsReporter:(id)a1;
- (void)reportInitialScanItemTypeMismatch:(id)a0;

@end
