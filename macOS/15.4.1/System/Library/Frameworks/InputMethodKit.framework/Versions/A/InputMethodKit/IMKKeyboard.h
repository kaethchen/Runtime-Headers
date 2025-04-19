@class NSString, IMKKeyboardDescriptor;
@protocol IMKInputMethod, IMKCandidateMenu, IMKTextDocument;

@interface IMKKeyboard : NSObject <IMKKeyboard>

@property (readonly, nonatomic) IMKKeyboardDescriptor *keyboardDescriptor;
@property (retain, nonatomic) id<IMKTextDocument> attachedTextDocument;
@property (readonly, nonatomic) id<IMKCandidateMenu> candidateMenu;
@property (retain, nonatomic) id<IMKInputMethod> inputMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKeyboardDescriptor:(id)a0;
- (BOOL)modifyWith:(unsigned long long)a0;
- (BOOL)pressKey:(id)a0 applyKeyModifiers:(unsigned long long)a1;
- (BOOL)pressKeyWithKeycode:(unsigned short)a0 applyKeyModifiers:(unsigned long long)a1;
- (BOOL)releaseKey:(id)a0 applyKeyModifiers:(unsigned long long)a1;
- (BOOL)releaseKeyWithKeycode:(unsigned short)a0 applyKeyModifiers:(unsigned long long)a1;

@end
