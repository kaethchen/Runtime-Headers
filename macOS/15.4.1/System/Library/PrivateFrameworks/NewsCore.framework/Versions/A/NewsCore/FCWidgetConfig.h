@class NSDictionary, NTPBWidgetConfig;

@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NTPBWidgetConfig *pbWidgetConfig;
@property (copy, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (readonly, nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (readonly, nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (readonly, nonatomic) long long widgetSystemReloadInterval;
@property (readonly, nonatomic) long long widgetSystemReloadJitterMax;
@property (readonly, nonatomic) long long widgetSystemHoneymoonDuration;
@property (readonly, nonatomic) long long widgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) long long widgetSystemReloadJitterMaxHoneymoon;
@property (readonly, nonatomic) long long smallWidgetSystemReloadInterval;
@property (readonly, nonatomic) long long smallWidgetSystemReloadJitterMax;
@property (readonly, nonatomic) long long smallWidgetSystemHoneymoonDuration;
@property (readonly, nonatomic) long long smallWidgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) long long smallWidgetSystemReloadJitterMaxHoneymoon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithWidgetConfig:(id)a0;

@end
