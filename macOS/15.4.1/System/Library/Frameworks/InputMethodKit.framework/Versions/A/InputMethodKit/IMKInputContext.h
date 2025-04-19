@class IMKKeyboardState, NSString;
@protocol IMKTextDocument;

@interface IMKInputContext : NSObject

@property (readonly, nonatomic) IMKKeyboardState *keyboardState;
@property (readonly, nonatomic) id<IMKTextDocument> documentContent;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) IMKInputContext *composingContext;

- (void).cxx_destruct;
- (id)contextWithComposingContext:(id)a0;
- (id)contextWithDocumentContent:(id)a0;
- (id)contextWithLanguageCode:(id)a0;
- (id)initWithKeyboardState:(id)a0;
- (id)initWithKeyboardState:(id)a0 content:(id)a1 composingContext:(id)a2 languageCode:(id)a3;

@end
