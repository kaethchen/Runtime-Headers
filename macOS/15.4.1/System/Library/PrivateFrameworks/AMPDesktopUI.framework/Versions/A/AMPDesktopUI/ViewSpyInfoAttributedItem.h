@class NSAttributedString;

@interface ViewSpyInfoAttributedItem : ViewSpyInfoItem

@property (retain, nonatomic) NSAttributedString *styledText;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)itemType;
- (void)updateFrom:(id)a0;

@end
