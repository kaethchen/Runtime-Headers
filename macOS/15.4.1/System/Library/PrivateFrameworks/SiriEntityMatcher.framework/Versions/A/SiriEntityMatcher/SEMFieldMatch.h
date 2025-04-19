@class NSObject, SEMSpanInfo;
@protocol SEMEntityFieldInfo;

@interface SEMFieldMatch : NSObject <NSCopying, NSSecureCoding> {
    SEMSpanInfo *_spanInfo;
    NSObject<SEMEntityFieldInfo> *_entityFieldInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityFieldInfo;
- (id)fieldSpanValue;
- (id)fieldSpanInfo;
- (id)initWithSpanInfo:(id)a0 entityFieldInfo:(id)a1;
- (BOOL)isEqualToSpanMatchField:(id)a0;

@end
