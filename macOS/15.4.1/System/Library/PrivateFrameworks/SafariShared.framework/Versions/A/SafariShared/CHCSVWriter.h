@class NSOutputStream, NSData, NSCharacterSet, NSMutableArray;

@interface CHCSVWriter : NSObject {
    NSOutputStream *_stream;
    unsigned long long _streamEncoding;
    NSData *_delimiter;
    NSData *_bom;
    NSCharacterSet *_illegalCharacters;
    unsigned long long _currentLine;
    unsigned long long _currentField;
    NSMutableArray *_firstLineKeys;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_writeData:(id)a0;
- (void)_writeString:(id)a0;
- (void)finishLine;
- (void)writeField:(id)a0;
- (void)_writeDelimiter;
- (void)_finishLineIfNecessary;
- (void)closeStream;
- (id)initForWritingToCSVFile:(id)a0;
- (id)initWithOutputStream:(id)a0 encoding:(unsigned long long)a1 delimiter:(unsigned short)a2;
- (void)writeComment:(id)a0;
- (void)writeLineOfFields:(id)a0;
- (void)writeLineWithDictionary:(id)a0;

@end
