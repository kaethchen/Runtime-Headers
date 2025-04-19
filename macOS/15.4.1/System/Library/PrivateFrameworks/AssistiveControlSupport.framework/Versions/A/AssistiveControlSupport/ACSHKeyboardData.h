@class NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, ACSHKeyboardLayout, NSMapTable;

@interface ACSHKeyboardData : NSObject

@property (class, readonly, copy, nonatomic) NSArray *_allKeyboardDataInSearchOrder;
@property (class, readonly, nonatomic) NSDictionary *_keyboardMetadataByKeyboardType;
@property (class, readonly, nonatomic) BOOL _shouldCacheBestGuessKeyboardDataByPanel;
@property (class, readonly, nonatomic) NSMapTable *_bestGuessKeyboardDataByPanel;
@property (class, readonly, copy, nonatomic) NSArray *allKeyboardData;
@property (class, readonly, nonatomic) ACSHKeyboardData *bestKeyboardDataForSystem;

@property (retain, nonatomic) id _propertyListObject;
@property (retain, nonatomic) id _metadata;
@property (nonatomic) unsigned long long keyboardType;
@property (retain, nonatomic) NSMutableDictionary *_cachedKeyboardPanelDictionariesByFunctionKeyMode;
@property (retain, nonatomic) NSSet *_cachedKeyCodesFoundInSystemKeyboardPanel;
@property (retain, nonatomic) NSSet *_cachedKeyCodesFoundInFunctionKeyboardPanel;
@property (readonly, nonatomic) BOOL _isBestSystemKeyboard;
@property (readonly, nonatomic) BOOL _isSystemKeyboardLayout;
@property (readonly, nonatomic) unsigned int _physicalKeyboardLayoutType;
@property (readonly, copy, nonatomic) NSString *systemKeyboardPanelUUID;
@property (readonly, copy, nonatomic) NSString *functionKeyPanelUUID;
@property (readonly, nonatomic) unsigned char keyboardID;
@property (readonly, nonatomic, getter=isLargeKeyboard) BOOL largeKeyboard;
@property (readonly, nonatomic) ACSHKeyboardLayout *keyboardLayout;

+ (id)keyboardDataForSystemPanelUUID:(id)a0;
+ (id)_keyCodesForPanel:(id)a0;
+ (id)_keyboardDataForKeyboardID:(unsigned char)a0;
+ (id)_keyboardDataForKeyboardType:(unsigned long long)a0;
+ (BOOL)_panel:(id)a0 hasMostOfKeyCodes:(id)a1;
+ (void)_recursivelyIterateButtonsInPanelElement:(id)a0 withBlock:(id /* block */)a1;
+ (id)bestGuessKeyboardDataForPanel:(id)a0;
+ (id)keyboardDataForHardwareKeyboardID:(unsigned char)a0 keyboardPhysicalType:(unsigned int)a1 allowLargeKeyboards:(BOOL)a2;
+ (id)keyboardDataForKeyboadType:(unsigned long long)a0 error:(id *)a1;
+ (id)propertyListRepresentationForKeyboardModel:(id)a0;

- (void).cxx_destruct;
- (id)_keyboardPanelDictionaryWithFunctionKeyMode:(unsigned long long)a0;
- (BOOL)_panelHasMostOfKeyCodesInSystemKeyboardPanel:(id)a0;
- (id)_panelWithKeyboardPanelDictionary:(id)a0 showLocation:(unsigned long long)a1 panelIdentifier:(id)a2 undoManager:(id)a3;
- (id)functionKeyPanelWithUndoManager:(id)a0;
- (id)initWithKeyboardType:(unsigned long long)a0 propertyListObject:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)panelHasFunctionKeys:(id)a0;
- (id)systemKeyboardPanelWithUndoManager:(id)a0;
- (id)templateKeyboardPanelWithUndoManager:(id)a0 functionKeyMode:(unsigned long long)a1;

@end
