@class NSArray, NSAttributedString;

@interface CUIKORContentStrings : NSObject

@property (retain, nonatomic) NSAttributedString *combinedString;
@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *locationString;
@property (retain, nonatomic) NSAttributedString *timeString;
@property (retain, nonatomic) NSAttributedString *trailingString;
@property (readonly, nonatomic) NSArray *nonNilComponents;

- (void).cxx_destruct;

@end
