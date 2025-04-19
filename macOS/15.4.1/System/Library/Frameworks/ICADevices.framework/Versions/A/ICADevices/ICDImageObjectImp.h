@interface ICDImageObjectImp : ICDBaseObjectImp

- (void)addUngroupedMetadata:(id)a0 toDictionary:(id)a1;
- (void)buildStandardProperties:(struct ICD_BulkNewPropertyPB { struct ICDHeader { short x0; unsigned long long x1; } x0; unsigned int x1; struct BulkNewPropertyData { unsigned int x0; struct ICAPropertyInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; } x2[1]; } *)a0 index:(unsigned int *)a1;
- (id)copyMetadataFromDataProvider:(struct CGDataProvider { } *)a0 fileExtension:(id)a1 final:(BOOL)a2;
- (id)getObjectPropertyDictionary:(id)a0;
- (short)saveSource:(id)a0 toFileAtPath:(id)a1 optionsDictionary:(id)a2;
- (void)updateMetadata:(id)a0 fileExtension:(id)a1;

@end
