@class NSArray, NSString, NSLocale;
@protocol NSSpeechRecognizerDelegate;

@interface NSSpeechRecognizerVars : NSObject

@property (weak) id<NSSpeechRecognizerDelegate> delegate;
@property (copy) NSArray *simpleCommandsArray;
@property (retain) NSArray *displayedStringsArray;
@property (copy) NSString *displayedStringsTitle;
@property struct __RXRecognitionSystem { } *recognitionSystem;
@property struct __RXRecognizer { } *recognizer;
@property (retain) NSLocale *locale;

- (void)dealloc;
- (void).cxx_destruct;

@end
