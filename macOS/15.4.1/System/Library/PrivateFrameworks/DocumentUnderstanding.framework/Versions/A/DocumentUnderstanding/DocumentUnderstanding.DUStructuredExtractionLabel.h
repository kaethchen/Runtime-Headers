@class NSString;

@interface DocumentUnderstanding.DUStructuredExtractionLabel : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ labelName;
}

@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) void /* unknown type, empty encoding */ confidenceScore;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
