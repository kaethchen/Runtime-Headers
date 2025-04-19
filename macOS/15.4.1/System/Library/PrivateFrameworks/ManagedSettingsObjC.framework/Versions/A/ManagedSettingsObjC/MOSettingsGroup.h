@class NSString;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsGroup : NSObject

@property (class, readonly, copy, nonatomic) NSString *groupName;

@property (weak, nonatomic) id<MOSettingsReader> settingsReader;
@property (weak, nonatomic) id<MOSettingsWriter> settingsWriter;

- (void).cxx_destruct;
- (id)valueForSetting:(id)a0;
- (id)initWithReader:(id)a0 writer:(id)a1;
- (id)metadataForSetting:(id)a0;
- (void)setValue:(id)a0 forSetting:(id)a1;

@end
