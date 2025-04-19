@class NSString, PKDrawing;

@interface GPPromptElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isPersonHandle;
@property (nonatomic) BOOL isSuggestableText;
@property (nonatomic) BOOL needsConceptsExtraction;
@property (nonatomic) BOOL needsSuggestableConceptsExtraction;
@property (copy, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) BOOL isTitle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 isPersonHandle:(BOOL)a1 isTitle:(BOOL)a2 isSuggestableText:(BOOL)a3 needsConceptsExtraction:(BOOL)a4 needsSuggestableConceptsExtraction:(BOOL)a5;
- (id)initWithText:(id)a0 isTitle:(BOOL)a1 isSuggestableText:(BOOL)a2 needsConceptsExtraction:(BOOL)a3 needsSuggestableConceptsExtraction:(BOOL)a4;
- (id)initWithText:(id)a0 title:(id)a1 isPersonHandle:(BOOL)a2 isSuggestableText:(BOOL)a3 needsConceptsExtraction:(BOOL)a4 needsSuggestableConceptsExtraction:(BOOL)a5 drawing:(id)a6 image:(struct CGImage { } *)a7;
- (id)initWithText:(id)a0 title:(id)a1 isPersonHandle:(BOOL)a2 isTitle:(BOOL)a3 isSuggestableText:(BOOL)a4 needsConceptsExtraction:(BOOL)a5 needsSuggestableConceptsExtraction:(BOOL)a6;

@end
