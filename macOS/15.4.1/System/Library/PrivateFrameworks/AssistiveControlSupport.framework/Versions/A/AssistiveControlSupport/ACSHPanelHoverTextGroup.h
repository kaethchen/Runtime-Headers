@class ACSHHoverTextModel, NSColor;

@interface ACSHPanelHoverTextGroup : ACSHPanelElement

@property (retain, nonatomic) ACSHHoverTextModel *hoverTextModel;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSColor *fontColor;

+ (id)keysForValuesToObserveForView;

- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)dictionaryForSaving;
- (void)updateWithHoverTextModel:(id)a0;

@end
