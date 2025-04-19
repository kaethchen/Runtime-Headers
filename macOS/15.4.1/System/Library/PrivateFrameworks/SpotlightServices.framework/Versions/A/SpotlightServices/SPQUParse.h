@class NSString, NSNumber, NSArray;

@interface SPQUParse : NSObject

@property (retain, nonatomic) NSString *intentLabel;
@property (retain, nonatomic) NSNumber *intentLabelId;
@property (retain, nonatomic) NSArray *tokenArguments;
@property (retain, nonatomic) NSNumber *isPQA;

- (void).cxx_destruct;
- (id)getEncodedData;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1 isPQA:(BOOL)a2;

@end
