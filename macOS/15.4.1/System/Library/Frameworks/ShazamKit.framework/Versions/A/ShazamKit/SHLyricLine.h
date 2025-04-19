@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *text;
@property double offset;

+ (id)lyricLineWithText:(id)a0 offset:(double)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLineWithText:(id)a0 offset:(double)a1;

@end
