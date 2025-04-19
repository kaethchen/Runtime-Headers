@class NSString;

@interface ICNumberLiteral : NSObject {
    void /* unknown type, empty encoding */ string;
}

@property (nonatomic) void /* unknown type, empty encoding */ range;
@property (nonatomic, copy) NSString *string;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1;

@end
