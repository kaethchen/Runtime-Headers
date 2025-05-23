@class NSString, BRLTTextFormattingRanges;

@interface BRLTTranslationParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic, getter=isPartial) BOOL partial;
@property (readonly, nonatomic) BOOL useTechnicalTableIfPossible;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textPositionsRange;
@property (readonly, nonatomic) BRLTTextFormattingRanges *textFormattingRanges;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 partial:(BOOL)a2 useTechnicalTable:(BOOL)a3 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 textFormattingRanges:(id)a5;

@end
