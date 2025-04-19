@class NSString, NSMutableArray;

@interface SCROutputSequentialStep : NSObject <NSCopying, NSSecureCoding> {
    NSString *_category;
    NSMutableArray *_actions;
    long long _repeatStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requestWasSentSynchronously;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)category;
- (void)setCategory:(id)a0;
- (id)shortDescription;
- (id)actions;
- (id)initWithAction:(id)a0;
- (void)addAction:(id)a0;
- (id)actionAtIndex:(unsigned long long)a0;
- (void)insertAction:(id)a0 atIndex:(unsigned long long)a1;
- (void)setRepeatStyle:(long long)a0;
- (id)_initWithSequentialStep:(id)a0;
- (void)removeActionAtIndex:(unsigned long long)a0;
- (long long)repeatStyle;
- (void)replaceActionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withActionsFromArray:(id)a1;

@end
