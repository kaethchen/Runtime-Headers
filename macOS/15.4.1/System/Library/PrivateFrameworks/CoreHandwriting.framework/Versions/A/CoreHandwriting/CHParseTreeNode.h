@class NSString;

@interface CHParseTreeNode : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputRange;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 inputRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
