@class NSData, QLTBitmapFormat;

@interface QLTBitmapImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) QLTBitmapFormat *format;

+ (id)imageWithFormat:(id)a0 data:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
