@interface ICDScannerSetParametersImp : ICDBaseCommandImp {
    struct ICD_ScannerSetParametersPB { struct ICDHeader { short err; unsigned long long refcon; } header; unsigned int object; struct ICAObjectInfo { unsigned int objectType; unsigned int objectSubtype; } objectInfo; unsigned int connectionID; unsigned int sessionID; struct __CFDictionary *theDict; } _scannerSetParametersPB;
}

- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;

@end
