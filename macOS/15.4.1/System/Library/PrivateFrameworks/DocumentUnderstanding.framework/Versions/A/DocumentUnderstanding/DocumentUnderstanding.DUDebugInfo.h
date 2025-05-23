@class NSString;

@interface DocumentUnderstanding.DUDebugInfo : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ debugString;
}

@property (nonatomic, copy) NSString *debugString;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
