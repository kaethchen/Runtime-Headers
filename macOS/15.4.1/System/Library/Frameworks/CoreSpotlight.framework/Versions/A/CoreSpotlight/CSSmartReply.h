@class NSAttributedString;

@interface CSSmartReply : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *responseText;
@property (nonatomic) BOOL isRichSmartReply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseText:(id)a0 isRichSmartReply:(BOOL)a1;

@end
