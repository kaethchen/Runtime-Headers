@class HMDStructuredWriter;

@interface HMDExtendedTypeWriter : HMDStructuredWriter {
    HMDStructuredWriter *_writer;
    unsigned long long _options;
}

- (void).cxx_destruct;
- (id)error;
- (void)failWithError:(id)a0;
- (void)writeData:(id)a0;
- (void)endArray;
- (void)endDictionary;
- (void)writeString:(id)a0;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (id)initWithWriter:(id)a0 options:(unsigned long long)a1;
- (void)writeBoolean:(BOOL)a0;
- (void)writeDate:(id)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeNull;
- (void)writeNumber:(id)a0;
- (void)writeUUID:(id)a0;

@end
