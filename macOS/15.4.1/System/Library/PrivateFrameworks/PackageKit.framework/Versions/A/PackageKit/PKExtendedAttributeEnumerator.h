@class NSString;

@interface PKExtendedAttributeEnumerator : NSObject {
    NSString *_path;
    char *_nameBuffer;
    long long _nameBufferSize;
    char *_currentName;
    long long _currentByteOffset;
    int _options;
}

- (void)dealloc;
- (id)_dataForAttributeName:(char *)a0;
- (id)initWithFileAtPath:(id)a0 options:(int)a1;
- (id)nextAttribute;
- (void)rewindToBeginning;

@end
