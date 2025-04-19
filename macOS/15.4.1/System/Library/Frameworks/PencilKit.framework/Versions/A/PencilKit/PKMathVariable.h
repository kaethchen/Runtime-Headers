@class NSUUID, NSIndexSet;

@interface PKMathVariable : NSObject

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } symbolsRange;
@property (nonatomic) double value;
@property (nonatomic) long long fractionalDigits;
@property (retain, nonatomic) NSIndexSet *strokeIndexes;

+ (id)variablesForTokenizedMathResult:(id)a0;
+ (id)variablesForTokens:(id)a0 item:(id)a1;
+ (id)variablesForTranscription:(id)a0 symbolStrokeIndexes:(id)a1;

- (void).cxx_destruct;

@end
