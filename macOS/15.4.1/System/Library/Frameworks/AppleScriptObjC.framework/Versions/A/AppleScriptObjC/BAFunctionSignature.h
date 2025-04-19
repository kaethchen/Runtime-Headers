@class NSString, NSMutableArray;

@interface BAFunctionSignature : NSObject {
    NSString *_returnType;
}

@property (retain, nonatomic) NSMutableArray *argTypes;
@property (retain, nonatomic) NSMutableArray *argModifiers;
@property (nonatomic) BOOL isVariadic;

+ (id)signatureWithMethodSignature:(id)a0;

- (void)dealloc;
- (id)init;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfArguments;
- (const char *)returnType;
- (void)setReturnType:(id)a0;
- (void)addArgumentWithType:(id)a0 modifier:(id)a1;
- (char)getArgumentModifierAtIndex:(unsigned long long)a0;
- (void)setArgumentType:(id)a0 modifier:(id)a1 atIndex:(unsigned long long)a2;

@end
