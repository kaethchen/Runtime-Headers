@class NSAttributedString;

@interface MPTextInternal : NSObject

@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) NSAttributedString *nsAttributedString;

- (void)dealloc;

@end
