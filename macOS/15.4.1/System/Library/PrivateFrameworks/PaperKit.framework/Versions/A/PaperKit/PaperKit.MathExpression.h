@class NSString;

@interface PaperKit.MathExpression : NSObject <CHMathExpression> {
    void /* unknown type, empty encoding */ expression;
}

@property (nonatomic, copy) NSString *expression;
@property (nonatomic) void /* unknown type, empty encoding */ expressionType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ strokeGroupIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ isAssociatedWithCurrentSession;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
