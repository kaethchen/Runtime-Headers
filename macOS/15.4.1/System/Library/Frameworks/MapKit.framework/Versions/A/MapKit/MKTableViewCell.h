@class NSView;

@interface MKTableViewCell : NSTableCellView {
    long long _style;
}

@property (readonly, nonatomic) NSView *contentView;

+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
