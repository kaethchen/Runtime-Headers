@class NSString;

@interface XQueryLiteral : XQueryExpr <XQueryExprBehavior> {
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decimalLiteralWithString:(id)a0;
+ (id)doubleLiteralWithString:(id)a0;
+ (id)integerLiteralWithString:(id)a0;
+ (id)literalWithValue:(id)a0;
+ (id)stringLiteralWithString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithValue:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)literalValue;

@end
