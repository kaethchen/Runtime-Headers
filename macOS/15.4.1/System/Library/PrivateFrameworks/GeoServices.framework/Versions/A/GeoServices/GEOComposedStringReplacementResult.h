@class NSString, NSAttributedString, NSArray;

@interface GEOComposedStringReplacementResult : NSObject {
    BOOL success;
    NSString *string;
    NSAttributedString *attributedString;
    NSArray *attributedComponentStrings;
    NSArray *attributedSeparatorStrings;
    NSArray *tokenReplacementResults;
    NSArray *styleReplacementResults;
}

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSArray *attributedComponentStrings;
@property (readonly, nonatomic) NSArray *attributedSeparatorStrings;
@property (readonly, nonatomic) NSArray *tokenReplacementResults;
@property (readonly, nonatomic) NSArray *styleReplacementResults;

- (void).cxx_destruct;

@end
