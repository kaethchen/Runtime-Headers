@class NSString;

@interface SGInput : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ attachment;
    void /* unknown type, empty encoding */ edge;
    void /* unknown type, empty encoding */ node;
}

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;

+ (id)inputWithName:(id)a0 type:(unsigned long long)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
