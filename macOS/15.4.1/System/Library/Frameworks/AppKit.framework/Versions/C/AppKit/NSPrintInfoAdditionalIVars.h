@class NSData, NSPrintInfoDictionaryProxy;

@interface NSPrintInfoAdditionalIVars : NSObject {
    struct OpaquePMPrintSession { } *printSession;
    struct OpaquePMPageFormat { } *pageFormat;
    struct OpaquePMPrintSettings { } *printSettings;
    NSData *flattenedPageFormatData;
    NSData *flattenedPrintSettingsData;
    BOOL printSessionIsReconciled;
    BOOL pageFormatIsReconciled;
    BOOL printSettingsIsReconciled;
    BOOL pageFormatIsValidated;
    BOOL printSettingsIsValidated;
    NSPrintInfoDictionaryProxy *attributesDictionaryProxy;
    NSPrintInfoDictionaryProxy *printSettingsDictionaryProxy;
    BOOL printerWasSetExplicitly;
}

@end
