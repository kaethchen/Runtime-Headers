@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long hour;
@property (readonly) long long minute;
@property (readonly) long long second;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)components;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (int)dateType;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5;

@end
