@interface ICDScannerInitializeImp : ICDBaseCommandImp {
    struct ICD_ScannerInitializePB { struct ICDHeader { short err; unsigned long long refcon; } header; unsigned int object; struct ICAObjectInfo { unsigned int objectType; unsigned int objectSubtype; } objectInfo; unsigned int connectionID; unsigned int sessionID; } _scannerInitializePB;
}

- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
