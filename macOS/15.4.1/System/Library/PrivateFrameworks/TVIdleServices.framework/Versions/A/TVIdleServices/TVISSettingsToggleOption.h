@interface TVISSettingsToggleOption : TVISSettingsOption

@property (readonly, nonatomic) BOOL onState;

- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 localizedDescription:(id)a2 isActive:(BOOL)a3 onState:(BOOL)a4 disabled:(BOOL)a5;

@end
