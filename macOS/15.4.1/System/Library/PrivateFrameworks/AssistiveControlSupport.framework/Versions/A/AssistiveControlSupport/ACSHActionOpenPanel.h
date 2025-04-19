@class NSString, NSDictionary;

@interface ACSHActionOpenPanel : ACSHAction

@property (copy, nonatomic) NSString *panelUUID;
@property (retain, nonatomic) NSDictionary *panelInfo;

+ (id)actionWithPanelUUID:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;

@end
