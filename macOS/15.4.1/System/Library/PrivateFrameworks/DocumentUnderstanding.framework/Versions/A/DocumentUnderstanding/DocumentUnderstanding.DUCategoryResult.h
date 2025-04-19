@class NSString;

@interface DocumentUnderstanding.DUCategoryResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ categoryIdentifier;
}

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ categoryConfidence;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
