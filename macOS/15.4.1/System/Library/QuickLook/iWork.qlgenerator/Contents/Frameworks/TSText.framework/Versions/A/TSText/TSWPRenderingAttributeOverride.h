@class NSDictionary, NSString;

@interface TSWPRenderingAttributeOverride : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *key;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attributes:(id)a2;

@end
