@class NSString;

@interface WFFinderImageResizeDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL preserveMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(unsigned long long)a0 size:(unsigned long long)a1 preserveMetadata:(BOOL)a2;

@end
