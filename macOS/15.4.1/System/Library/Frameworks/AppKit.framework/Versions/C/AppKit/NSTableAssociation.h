@class NSView;

@interface NSTableAssociation : NSObject <NSCoding>

@property (retain, nonatomic) NSView *view;
@property (nonatomic) long long column;

+ (id)associationWithView:(id)a0 column:(long long)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
