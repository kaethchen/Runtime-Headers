@class NSArray, NLLanguageRecognizer;

@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}

@property (copy, nonatomic) NSArray *availableLocales;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(unsigned long long)a0;
- (id)_mapSupportedLocales:(id)a0;
- (id)detectionForString:(id)a0;
- (id)detectionForStrings:(id)a0;
- (id)detectionForStrings:(id)a0 strategy:(unsigned long long)a1;

@end
