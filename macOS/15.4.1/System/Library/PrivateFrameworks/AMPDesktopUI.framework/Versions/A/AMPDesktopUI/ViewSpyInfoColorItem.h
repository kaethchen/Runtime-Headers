@class NSColor, NSString;

@interface ViewSpyInfoColorItem : ViewSpyInfoItem

@property (retain, nonatomic) NSColor *color;
@property (copy, nonatomic) NSString *colorSpaceName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)itemType;
- (void)updateFrom:(id)a0;

@end
