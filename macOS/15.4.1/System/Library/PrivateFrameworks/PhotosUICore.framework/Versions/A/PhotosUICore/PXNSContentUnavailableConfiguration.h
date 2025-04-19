@class NSString, NSAttributedString;

@interface PXNSContentUnavailableConfiguration : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)emptyConfiguration;

- (void).cxx_destruct;

@end
