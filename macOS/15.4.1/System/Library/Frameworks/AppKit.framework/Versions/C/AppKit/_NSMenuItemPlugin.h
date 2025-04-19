@interface _NSMenuItemPlugin : _NSValueBinderPlugin

+ (BOOL)isUsableWithObject:(id)a0;

- (BOOL)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(BOOL *)a2;
- (void)actionHasBegun:(id)a0 sender:(id)a1;
- (BOOL)needsAction;
- (id)objectMechanismsRequired;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;

@end
