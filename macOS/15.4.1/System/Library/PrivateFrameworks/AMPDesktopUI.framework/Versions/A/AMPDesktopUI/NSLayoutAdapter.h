@class NSLayoutConstraint;

@interface NSLayoutAdapter : NSObject

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxHeightConstraint;

- (void).cxx_destruct;

@end
