@class NSString, NSMutableData, NSMutableArray, NSAttributedString;

@interface _AMActionAuxiliary : NSObject

@property (retain, nonatomic) NSMutableArray *inputConnectionPoints;
@property (retain, nonatomic) NSMutableArray *outputConnectionPoints;
@property (retain, nonatomic) id outputOfPreviousAction;
@property (retain, nonatomic) NSMutableArray *bindings;
@property (retain, nonatomic) NSMutableArray *outputAsArrayOfResultsItems;
@property (nonatomic) BOOL isDeprecated;
@property (copy, nonatomic) NSAttributedString *richTextOutput;
@property (copy, nonatomic) NSString *selectedInputType;
@property (copy, nonatomic) NSString *selectedOutputType;
@property (nonatomic) double progressValue;
@property (retain, nonatomic) NSMutableData *amShellScriptActionResultData;

- (id)init;
- (void).cxx_destruct;

@end
