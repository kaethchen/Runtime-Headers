@class NSMutableDictionary, NSString, NSSet, NSError;

@interface WBSMetadataDictionaryReaderDelegate : NSObject <WBSJSONReaderDelegate> {
    unsigned long long _level;
    NSString *_lastKey;
    BOOL _insideMetadata;
    NSSet *_validKeys;
    NSSet *_stringKeys;
    NSSet *_numberKeys;
}

@property (retain) NSMutableDictionary *metadataDictionary;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (BOOL)jsonReader:(id)a0 appendKey:(id)a1;
- (BOOL)jsonReader:(id)a0 error:(id)a1;
- (BOOL)jsonReader:(id)a0 scalarValue:(id)a1;
- (BOOL)jsonReaderBeginArray:(id)a0;
- (BOOL)jsonReaderBeginObject:(id)a0;
- (BOOL)jsonReaderEndArray:(id)a0;
- (BOOL)jsonReaderEndObject:(id)a0;

@end
