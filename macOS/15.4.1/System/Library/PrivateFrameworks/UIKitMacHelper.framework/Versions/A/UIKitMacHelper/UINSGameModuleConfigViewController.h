@class UINSTouchAlternativesConfigurationView, UINSGameModule;

@interface UINSGameModuleConfigViewController : NSViewController

@property (weak) UINSTouchAlternativesConfigurationView *configurationParent;
@property (weak) UINSGameModule *gameModule;

- (void).cxx_destruct;
- (void)save:(id)a0;
- (id)initWithNibName:(id)a0;
- (void)deleteGameModule:(id)a0;

@end
