@protocol UINSActivityItemsConfigurationReading;

@interface UINSSharingToolbarItem : NSToolbarItem

@property (retain, nonatomic, setter=_setActivityItemsConfiguration:) id<UINSActivityItemsConfigurationReading> _activityItemsConfiguration;

- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (id)initWithItemIdentifier:(id)a0;
- (void)validate;
- (void)_share:(id)a0;

@end
