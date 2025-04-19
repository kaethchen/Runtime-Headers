@interface SiriCoreLinkRecommendationInfo : NSObject {
    BOOL _btPreference;
    BOOL _wifiPreference;
    double _timeTaken;
}

- (id)initWithQueue:(id)a0;
- (void)setLinkMetrics:(id)a0;
- (id)linkMetrics;
- (double)timeTaken;
- (void)setTimeTaken:(double)a0;
- (BOOL)btPreference;
- (void)fetchLinkMetrics:(id /* block */)a0;
- (id)initWithPreferences:(BOOL)a0 wifiPreference:(BOOL)a1 timeTaken:(double)a2 metrics:(id)a3;
- (void)resetLinkMetrics;
- (void)setBTPreference:(BOOL)a0;
- (void)setWiFiPreference:(BOOL)a0;
- (BOOL)wifiPreference;

@end
