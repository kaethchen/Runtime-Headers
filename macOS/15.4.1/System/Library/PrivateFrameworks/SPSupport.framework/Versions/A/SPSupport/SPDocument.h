@class NSImage, NSString, NSMutableDictionary, NSArray, NSBundle, NSObject, NSNumberFormatter;
@protocol SPDocumentDelegate;

@interface SPDocument : NSDocument {
    NSMutableDictionary *_systemProfileDictionary;
    NSMutableDictionary *_dataTypes;
    NSMutableDictionary *_detailLevelsForDataTypes;
    BOOL _loadedFromFile;
    int _detailLevel;
    int _maximumDetailLevel;
    NSArray *_localizableUnits;
    NSBundle *_frameworkBundle;
    NSNumberFormatter *_englishNumberFormatter;
    NSImage *_modelIcon;
}

@property double timeout;
@property (weak) NSObject<SPDocumentDelegate> *delegate;
@property (copy) NSString *selectedDataType;

- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)dataOfType:(id)a0 error:(id *)a1;
- (void)makeWindowControllers;
- (id)printOperationWithSettings:(id)a0 error:(id *)a1;
- (BOOL)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)saveToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)writableTypesForSaveOperation:(unsigned long long)a0;
- (id)modelName;
- (id)dataTypes;
- (id)jsonRepresentation;
- (id)computerName;
- (id)modelIcon;
- (id)localizedStringForKey:(id)a0 dataType:(id)a1;
- (void)setDetailLevel:(int)a0;
- (id)_reportFromBundlesForDataType:(id)a0;
- (void)_addDataType:(id)a0 parent:(id)a1 detailLevel:(int)a2;
- (id)jsonRepresentationForDataTypes:(id)a0;
- (void)_enforceDetailLevelForPlist:(id)a0 usingProperties:(id)a1;
- (id)_attributedStringForItem:(id)a0 dataType:(id)a1 indentation:(float)a2 isUnit:(BOOL)a3;
- (id)_jsonRepresentationForArray:(id)a0;
- (void)_reportFromBundlesForDataType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportFromHelperToolForDataType:(id)a0 completionHandler:(id /* block */)a1;
- (id)_setReport:(id)a0 forDataType:(id)a1;
- (id)_stringForItem:(id)a0 dataType:(id)a1 indentation:(int)a2 isUnit:(BOOL)a3;
- (id)_xmlPropertyListRepresentationForArray:(id)a0;
- (id)attributedStringForDataTypes:(id)a0;
- (id)attributedStringForItem:(id)a0 dataType:(id)a1;
- (id)dataTypesWithParent:(id)a0;
- (int)detailLevel;
- (id)handleUploadCommand:(id)a0;
- (BOOL)isLoadedFromFile;
- (id)localizedDescriptionForObject:(id)a0 dataType:(id)a1;
- (int)maximumDetailLevel;
- (void)obscureBluetoothNames:(id)a0;
- (id)orderedIdentifiersForItem:(id)a0 dataType:(id)a1;
- (id)parentOfDataType:(id)a0;
- (id)plainTextRepresentation;
- (id)plainTextRepresentationForDataTypes:(id)a0;
- (id)propertiesForDataType:(id)a0;
- (void)refreshReportForDataType:(id)a0;
- (void)refreshReports;
- (id)reportForDataType:(id)a0;
- (id)reportHeader;
- (id)reportsForDataTypes:(id)a0;
- (id)richTextRepresentation;
- (id)richTextRepresentationForDataTypes:(id)a0;
- (BOOL)shouldUseRightToLeftLayout;
- (id)stringForDataTypes:(id)a0;
- (id)stringForItem:(id)a0 dataType:(id)a1;
- (BOOL)uploadToURL:(id)a0 usingCompression:(BOOL)a1;
- (id)xmlPropertyListRepresentation;
- (id)xmlPropertyListRepresentationForDataTypes:(id)a0;

@end
