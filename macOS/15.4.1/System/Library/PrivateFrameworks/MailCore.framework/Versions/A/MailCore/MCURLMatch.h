@class NSString;

@interface MCURLMatch : NSObject

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 urlString:(id)a1;

@end
