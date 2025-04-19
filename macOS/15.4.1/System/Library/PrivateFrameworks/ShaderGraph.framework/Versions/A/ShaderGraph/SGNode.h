@class NSString, NSArray;

@interface SGNode : NSObject <SGHasIO> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ inputs;
    void /* unknown type, empty encoding */ outputs;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ graph;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;

+ (id)nodeWithNodeDefName:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)nodeWithConstantColor3:(struct CGColor { } *)a0 name:(id)a1 error:(id *)a2;
+ (id)nodeWithConstantColor4:(struct CGColor { } *)a0 name:(id)a1 error:(id *)a2;
+ (id)nodeWithConstantScalar:(id)a0 type:(unsigned long long)a1 name:(id)a2 error:(id *)a3;
+ (id)nodeWithConstantString:(id)a0 type:(unsigned long long)a1 name:(id)a2 error:(id *)a3;
+ (id)nodeWithConstantVector:(id)a0 type:(unsigned long long)a1 name:(id)a2 error:(id *)a3;
+ (id)nodeWithGraph:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)nodeWithConstantBoolean:(BOOL)a0 name:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
