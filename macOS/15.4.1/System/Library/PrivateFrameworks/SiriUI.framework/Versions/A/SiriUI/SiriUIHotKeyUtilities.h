@interface SiriUIHotKeyUtilities : NSObject

+ (int)getMenuEntryForSelectedHotKey:(id)a0 saeEnabled:(BOOL)a1;
+ (int)getMenuEntryForSelectedHotKeySAE:(unsigned short)a0 virtualKey:(unsigned short)a1 modifier:(unsigned int)a2;
+ (int)getMenuEntryForSelectedHotKeySiriX:(unsigned short)a0 virtualKey:(unsigned short)a1 modifier:(unsigned int)a2;
+ (id)getSOKeyMenuEntryEitherCommandTwiceString;
+ (id)getSOKeyMenuEntryFunctionSpaceString;
+ (id)getSOKeyMenuEntryGlobeSString;
+ (id)getSOKeyMenuEntryHoldCommandSpaceString;
+ (id)getSOKeyMenuEntryHoldOptionSpaceString;
+ (id)getSOKeyMenuEntryLeftCommandTwiceString;
+ (id)getSOKeyMenuEntryNoneString;
+ (id)getSOKeyMenuEntryRightCommandTwiceString;
+ (id)getSelectedHotKeyForMenuEntry:(int)a0;
+ (id)getSiriXMenuEntryNoneString;
+ (id)getcustomizedHotKeyFromConfigEditor:(id)a0;
+ (id)getcustomizedHotKeyString:(id)a0;

@end
