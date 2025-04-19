@class CHSWidgetTintParameters, NSString;

@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) BOOL allowsPrivacySensitiveContent;
@property (readonly, nonatomic) BOOL userWantsWidgetDataWhenPasscodeLocked;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) NSString *additionalSettingsContext;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
