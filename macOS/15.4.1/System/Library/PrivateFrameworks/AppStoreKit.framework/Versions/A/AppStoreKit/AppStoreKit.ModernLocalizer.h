@class NSString;

@interface AppStoreKit.ModernLocalizer : NSObject <AppStoreKit.LocalizerProtocol> {
    void /* unknown type, empty encoding */ localizer;
    void /* unknown type, empty encoding */ legacyLocalizer;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)formattedCount:(id)a0;
- (id)string:(id)a0;
- (id)fileSize:(id)a0;
- (id)relativeDate:(id)a0;
- (id)formatDate:(id)a0 :(id)a1;
- (id)stringWithCount:(id)a0 :(long long)a1;
- (id)timeAgo:(id)a0;
- (id)decimal:(id)a0 :(long long)a1;
- (id)formatDateInSentence:(id)a0 :(id)a1 :(id)a2;
- (id)formatDateWithContext:(id)a0 :(id)a1 :(id)a2;
- (id)formatDuration:(long long)a0 :(id)a1;
- (id)formattedCountForPreferredLocale:(id)a0 :(id)a1;
- (id)string:(id)a0 with:(id)a1;
- (id)stringForPreferredLocale:(id)a0 :(id)a1;
- (id)stringWithCounts:(id)a0 :(id)a1;
- (id)timeAgoWithContext:(id)a0 :(id)a1;

@end
