@interface CRMLEmbossedNumberModel : CRMLCCModel

- (id)modelName;
- (int)classCount;
- (const int *)codeMap;
- (id)decodeActivations:(void *)a0;

@end
