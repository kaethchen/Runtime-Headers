@interface SCRO2DBrailleElement : NSObject

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linesRange;

- (id)initWithIdentifier:(unsigned long long)a0 linesRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
