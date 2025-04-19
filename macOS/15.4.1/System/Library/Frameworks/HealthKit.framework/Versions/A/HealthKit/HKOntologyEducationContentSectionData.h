@class NSArray;

@interface HKOntologyEducationContentSectionData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *stringValues;
@property (readonly, nonatomic) long long sectionDataType;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL deleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStringValues:(id)a0 sectionDataType:(long long)a1 version:(long long)a2 timestamp:(double)a3 deleted:(BOOL)a4;

@end
