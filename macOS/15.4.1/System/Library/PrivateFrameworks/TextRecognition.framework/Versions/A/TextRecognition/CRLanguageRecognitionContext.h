@class NSString, NSMutableArray, NSMutableString;

@interface CRLanguageRecognitionContext : NSObject {
    NSString *_recognizedLanguage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _languageRecognitionLock;
    NSMutableArray *_featuresAccumulator;
    NSMutableString *_contextString;
    unsigned long long _script;
    NSString *_defaultLocale;
}

- (void).cxx_destruct;
- (id)initWithScript:(unsigned long long)a0 defaultLocale:(id)a1;

@end
