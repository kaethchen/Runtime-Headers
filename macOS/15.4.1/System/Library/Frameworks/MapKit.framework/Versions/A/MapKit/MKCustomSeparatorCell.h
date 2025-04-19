@class NSColor, MKViewWithHairline;

@interface MKCustomSeparatorCell : MKTableViewCell {
    MKViewWithHairline *_separatorView;
}

@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (nonatomic) double leftSeparatorInset;
@property (nonatomic) double rightSeparatorInset;
@property (nonatomic) double leadingSeparatorInset;
@property (nonatomic) double trailingSeparatorInset;
@property (retain, nonatomic) NSColor *separatorColor;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
