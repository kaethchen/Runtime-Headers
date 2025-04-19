@class NSString;

@interface SCROutputPunctuationSettings : NSObject <NSCopying>

@property (retain, nonatomic) NSString *category;
@property (nonatomic) long long punctuationVerbosityLevel;
@property (nonatomic) BOOL punctuationVerbosityOverriddenByMetadata;
@property (retain, nonatomic) NSString *punctuationRepeatMode;
@property (nonatomic) unsigned long long punctuationRepeatLimit;
@property (retain, nonatomic) NSString *spaceRepeatMode;
@property (retain, nonatomic) NSString *spaceIndentationMode;
@property (nonatomic) unsigned long long spaceIndentationWidth;

+ (id)defaultsForCategory:(id)a0;
+ (id)settingsWithHighestVerbosity;
+ (id)settingsWithLowestVerbosity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateSettingsWithCategory:(id)a0;

@end
