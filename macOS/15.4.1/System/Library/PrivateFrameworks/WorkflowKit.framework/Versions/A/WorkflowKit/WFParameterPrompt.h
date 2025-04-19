@class NSString, LNDialog;

@interface WFParameterPrompt : NSObject

@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) LNDialog *linkDialog;

- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0 linkDialog:(id)a1;

@end
