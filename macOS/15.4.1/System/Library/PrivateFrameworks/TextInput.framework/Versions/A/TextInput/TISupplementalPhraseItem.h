@class NSString;

@interface TISupplementalPhraseItem : TISupplementalItem

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *phoneticTitle;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 phoneticTitle:(id)a1;

@end
