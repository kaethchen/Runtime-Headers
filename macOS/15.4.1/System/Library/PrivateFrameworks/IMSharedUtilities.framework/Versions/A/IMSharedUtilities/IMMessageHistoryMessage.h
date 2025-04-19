@class NSString, NSDate;

@interface IMMessageHistoryMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long messagePartCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGUID:(id)a0 date:(id)a1 messagePartCount:(long long)a2;

@end
