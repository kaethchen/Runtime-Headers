@class SOBadgeRoundRectView, NSLayoutConstraint;

@interface SOCorrectionCollectionViewItem : NSCollectionViewItem {
    double _maxBadgeWidth;
}

@property (nonatomic) double maxBadgeWidth;
@property (readonly, nonatomic) unsigned long long badgeNumber;
@property (retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint;
@property (retain, nonatomic) SOBadgeRoundRectView *badgeView;

+ (id)identifier;

- (void).cxx_destruct;
- (void)loadView;
- (void)setBadgeNumber:(unsigned long long)a0 digits:(unsigned long long)a1;

@end
