@class NSString;

@interface MFJunkMailAnalysisResult : NSObject

@property (nonatomic) long long junkMailLevel;
@property (retain, nonatomic) NSString *plainText;

- (void).cxx_destruct;
- (id)initWithJunkMailLevel:(long long)a0 plainText:(id)a1;

@end
