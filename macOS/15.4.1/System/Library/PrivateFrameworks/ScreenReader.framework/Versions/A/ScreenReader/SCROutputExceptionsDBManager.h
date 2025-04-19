@class NSMutableDictionary;

@interface SCROutputExceptionsDBManager : NSObject

@property (retain, nonatomic, setter=_setApplicationExceptionsDBCacheTable:) NSMutableDictionary *_applicationExceptionsDBCacheTable;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (struct __CFString { } *)_bestStringFromAlternatesTable:(struct __CFDictionary { } *)a0 usingAlternateKeys:(struct __CFArray { } *)a1;
- (struct __CFString { } *)_copyBestAlternateStringFromDatabase:(struct __CFDictionary { } *)a0 uiElementRole:(struct __CFString { } *)a1 uiElementSubRole:(struct __CFString { } *)a2 valueKey:(struct __CFString { } *)a3 alternateKeys:(struct __CFArray { } *)a4;
- (struct __CFString { } *)_copyBestAlternateStringFromTextSectionOfDatabase:(struct __CFDictionary { } *)a0 valueKey:(struct __CFString { } *)a1 alternateKeys:(struct __CFArray { } *)a2;
- (id)_databaseForName:(struct __CFString { } *)a0;
- (struct __CFString { } *)copyBestAlternateStringForAction:(id)a0 alternateKeys:(struct __CFArray { } *)a1;

@end
