@class NSDateFormatter, NSMutableString, NSFileHandle, NSMutableData, NSMutableArray, NSData;

@interface MSVPropertyListEncoder : NSObject

@property (retain, nonatomic) NSFileHandle *outputFileHandle;
@property (retain, nonatomic) NSMutableData *outputBuffer;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableArray *containerStack;
@property (retain, nonatomic) NSMutableString *tabPrefix;
@property (retain, nonatomic) NSData *tabPrefixData;
@property (readonly, nonatomic) NSData *arrayOpeningTagData;
@property (readonly, nonatomic) NSData *arrayClosingTagData;
@property (readonly, nonatomic) NSData *dictionaryOpeningTagData;
@property (readonly, nonatomic) NSData *dictionaryClosingTagData;
@property (readonly, nonatomic) NSData *keyOpeningTagData;
@property (readonly, nonatomic) NSData *keyClosingTagData;
@property (readonly, nonatomic) NSData *stringOpeningTagData;
@property (readonly, nonatomic) NSData *stringClosingTagData;
@property (readonly, nonatomic) NSData *dataOpeningTagData;
@property (readonly, nonatomic) NSData *dataClosingTagData;
@property (readonly, nonatomic) NSData *boolTrueTagData;
@property (readonly, nonatomic) NSData *boolFalseTagData;

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)close;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)endArray;
- (void)endDictionary;
- (void)_addObject:(id)a0;
- (void)startDictionary;
- (void)_decrementTabPrefix;
- (void)_encodeData:(id)a0;
- (void)_encodeDate:(id)a0;
- (void)_encodeNumber:(id)a0;
- (void)_encodeString:(id)a0;
- (void)_flushOutputBuffer;
- (void)_incrementTabPrefix;
- (void)_startArray;
- (void)_startDictionary;
- (void)_writeData:(id)a0;
- (void)_writeDictionaryKey:(id)a0;
- (void)_writeString:(id)a0;
- (id)initWithOutputFileHandle:(id)a0;
- (void)startArray;
- (void)startArrayForKey:(id)a0;
- (void)startDictionaryForKey:(id)a0;

@end
