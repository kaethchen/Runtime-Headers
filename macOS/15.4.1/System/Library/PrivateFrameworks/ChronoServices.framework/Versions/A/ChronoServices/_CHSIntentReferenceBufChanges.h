@interface _CHSIntentReferenceBufChanges : NSObject {
    unsigned char _changeTypeStableHash;
    long long _replacementStableHash;
    unsigned char _changeTypeIntentData;
    unsigned int _replacementIntentData;
    unsigned char _changeTypeSchemaData;
    unsigned int _replacementSchemaData;
    unsigned char _changeTypePartialIntentData;
    unsigned int _replacementPartialIntentData;
}

- (void)omitIntentData;
- (void)omitPartialIntentData;
- (void)omitSchemaData;
- (void)omitStableHash;
- (void)preserveIntentData;
- (void)preservePartialIntentData;
- (void)preserveSchemaData;
- (void)preserveStableHash;
- (void)replaceIntentData:(id)a0;
- (void)replacePartialIntentData:(id)a0;
- (void)replaceSchemaData:(id)a0;
- (void)replaceStableHash:(long long)a0;

@end
