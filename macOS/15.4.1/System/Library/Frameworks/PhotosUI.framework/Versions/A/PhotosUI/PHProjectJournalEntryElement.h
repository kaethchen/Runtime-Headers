@class PHProjectAssetElement, PHProjectTextElement, NSDate;

@interface PHProjectJournalEntryElement : PHProjectElement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) PHProjectAssetElement *assetElement;
@property (readonly, nonatomic) PHProjectTextElement *textElement;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)initWithDate:(id)a0 assetElement:(id)a1 textElement:(id)a2 weight:(id)a3 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
