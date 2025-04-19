@interface AMSChar : NSObject

@property (readonly) char value;

+ (id)charWithChar:(char)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithChar:(char)a0;
- (BOOL)isEqualToChar:(id)a0;

@end
