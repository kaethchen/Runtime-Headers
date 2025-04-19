@class NSString;

@interface PFAnalyticsEvent : NSObject {
    void /* unknown type, empty encoding */ payloadGenerator;
}

@property (class, nonatomic, readonly) PFAnalyticsEvent *globalRetentionPolicy;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ name;
@property (nonatomic, copy) id /* block */ payloadGenerator;
@property (nonatomic, readonly) NSString *description;

+ (id)darkDownloadsChangeWithWasDark:(BOOL)a0 isDark:(BOOL)a1 reason:(unsigned long long)a2 previousExit:(id)a3;
+ (id)downloadedFileHasiPodLibraryURLWithDiscoveryPoint:(id)a0 path:(id)a1 source:(id)a2;
+ (id)drmKeyRecoveredWithGenerator:(id /* block */)a0;
+ (id)drmKeyRecoveredWithPayload:(id)a0;
+ (id)episodeDurationComparisonWithEpisodeAdamId:(long long)a0 duration:(double)a1;
+ (id)episodeDurationComparisonWithMapiProvidedDuration:(double)a0 playerItemDuration:(double)a1;
+ (id)transcriptAlignmentFailedWithReason:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 generator:(id /* block */)a1;
- (id)initWithName:(id)a0 payload:(id)a1;

@end
