@interface ICDScannerCloseSessionImp : ICDBaseCommandImp {
    struct ICD_ScannerCloseSessionPB { struct ICDHeader { short err; unsigned long long refcon; } header; unsigned int object; struct ICAObjectInfo { unsigned int objectType; unsigned int objectSubtype; } objectInfo; unsigned int connectionID; unsigned int sessionID; } _scannerCloseSessionPB;
}

- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
