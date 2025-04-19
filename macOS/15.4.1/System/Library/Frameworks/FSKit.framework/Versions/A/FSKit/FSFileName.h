@class NSData, NSString;

@interface FSFileName : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (readonly) NSString *string;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameWithString:(id)a0;
+ (id)nameWithBytes:(const char *)a0 length:(unsigned long long)a1;
+ (id)nameWithCString:(const char *)a0;
+ (id)nameWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithBytes:(const char *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithCString:(const char *)a0;

@end
