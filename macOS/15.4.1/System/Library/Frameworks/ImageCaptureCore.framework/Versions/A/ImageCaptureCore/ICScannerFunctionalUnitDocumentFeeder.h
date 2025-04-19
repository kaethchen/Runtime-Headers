@class NSIndexSet;

@interface ICScannerFunctionalUnitDocumentFeeder : ICScannerFunctionalUnit {
    id _dfProps;
}

@property (readonly) BOOL canDetectDocument;
@property BOOL documentLoaded;
@property (readonly) unsigned long long justification;
@property (readonly) NSIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (readonly) struct CGSize { double x0; double x1; } documentSize;
@property (readonly) BOOL supportsDuplexScanning;
@property BOOL duplexScanningEnabled;
@property unsigned long long oddPageOrientation;
@property unsigned long long evenPageOrientation;
@property (readonly) BOOL reverseFeederPageOrder;

- (id)description;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)currentSettings;
- (id)colorSyncProfilePath;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;
- (void)setDuplexSupportLevel:(id)a0;

@end
