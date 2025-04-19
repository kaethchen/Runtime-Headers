@interface DocumentUnderstanding.PosTaggingResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ len;
}

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
