@class NSString, NSMutableArray, BFProsodicState;

@interface BFPlaintalkParser : NSObject

@property (retain, nonatomic) NSString *plaintalkString;
@property (nonatomic) long long currentIndex;
@property (nonatomic) unsigned long long contextSkipperState;
@property (nonatomic) unsigned long long contextSkipStart;
@property (retain, nonatomic) NSMutableArray *product;
@property (retain, nonatomic) BFProsodicState *initialProsodicState;
@property (retain, nonatomic) BFProsodicState *currentProsodicState;
@property (nonatomic) long long firstNonCommandCharacterIndex;
@property (nonatomic) long long lastNonCommandCharacterIndex;

- (void).cxx_destruct;
- (id)parse;
- (void)_parse;
- (void)_parseText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nextCommandAtStartOfTail;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nextNumericStringRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nextTextStringRange;
- (void)_parseCommand;
- (id)initWithText:(id)a0 andProsodicState:(id)a1;
- (id)tail;

@end
