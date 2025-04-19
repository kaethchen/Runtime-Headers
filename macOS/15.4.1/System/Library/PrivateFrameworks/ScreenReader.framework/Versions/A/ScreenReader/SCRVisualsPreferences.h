@class SCRCUserDefaults;

@interface SCRVisualsPreferences : NSObject

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (nonatomic, setter=_setVisualsFontSize:) double _visualsFontSize;
@property (retain, nonatomic, setter=_setFontSizeObserver:) id _fontSizeObserver;
@property (nonatomic) double visualsFontSize;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)setVisualsFontSizeValue:(id)a0;

@end
