@class NSString;

@interface OADFormula : NSObject {
    int mType;
    struct OADFormulaArg { int type; int value; } mArgs[3];
    NSString *mName;
}

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (int)type;
- (struct OADFormulaArg { int x0; int x1; })argAtIndex:(unsigned int)a0;
- (id)initWithType:(int)a0 arg0:(struct OADFormulaArg { int x0; int x1; })a1 arg1:(struct OADFormulaArg { int x0; int x1; })a2 arg2:(struct OADFormulaArg { int x0; int x1; })a3;

@end
