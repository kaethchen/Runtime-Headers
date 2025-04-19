@class NSString;

@interface NSStringWithSelection : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long offset;

- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2;

@end
