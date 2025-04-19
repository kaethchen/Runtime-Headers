@class NSIndexSet;

@interface ICScannerFunctionalUnitFlatbed : ICScannerFunctionalUnit {
    id _fbProps;
}

@property (readonly) NSIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (readonly) struct CGSize { double x0; double x1; } documentSize;

- (id)description;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)currentSettings;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (id)colorSyncProfilePath;
- (BOOL)handleCommandCompletion:(id)a0;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;

@end
