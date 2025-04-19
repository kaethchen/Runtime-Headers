@class NSString, UITextSuggestion;

@interface BETextSuggestion : NSObject {
    UITextSuggestion *_uiSuggestion;
}

@property (readonly, copy, nonatomic) NSString *inputText;

- (void).cxx_destruct;
- (id)initWithInputText:(id)a0;

@end
