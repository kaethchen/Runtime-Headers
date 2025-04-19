@class NSString, NSArray;

@interface PECopyEditsSetting : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSArray *compositionKeys;
@property (nonatomic) BOOL enabled;

+ (id)allSettings;
+ (BOOL)_isSettingIdentifierEnabledByDefault:(unsigned long long)a0;

- (id)initWithIdentifier:(unsigned long long)a0;
- (BOOL)isApplicableToCompositionController:(id)a0 asset:(id)a1;

@end
