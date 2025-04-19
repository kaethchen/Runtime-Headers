@interface PPSpecifierViewController : NSServiceViewController <PPSpecifierExtensionNotifying>

- (id)exportedInterface;
- (void)setEditable:(BOOL)a0;
- (unsigned long long)awakeFromRemoteView;
- (void)setPersonality:(id)a0;
- (void)updateView;
- (void)didUnselect;
- (void)willSelect;
- (void)revealElementForKey:(id)a0;

@end
