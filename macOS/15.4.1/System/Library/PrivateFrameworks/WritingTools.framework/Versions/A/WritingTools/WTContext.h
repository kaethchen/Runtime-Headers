@class NSUUID, WTSmartReplyConfiguration, NSAttributedString;

@interface WTContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WTSmartReplyConfiguration *smartReplyConfig;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributedText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)setAttributedText:(id)a0;

@end
