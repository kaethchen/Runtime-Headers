@class NSDictionary;

@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_sequenceNumbers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CADToken;
- (id)initWithCADSequenceToken:(id)a0;
- (int)legacyToken;

@end
