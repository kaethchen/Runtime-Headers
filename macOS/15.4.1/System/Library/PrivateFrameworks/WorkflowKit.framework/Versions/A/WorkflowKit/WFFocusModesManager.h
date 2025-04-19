@interface WFFocusModesManager : NSObject

+ (id)availableModes;
+ (id)activeMode;
+ (id)defaultActivity;
+ (id)availableModesForAutomationsDisplay;
+ (id)enteringSymbolForSymbolName:(id)a0;
+ (id)exitingSymbolForSymbolName:(id)a0;
+ (id)glyphToFilledGlyphMapping;

@end
