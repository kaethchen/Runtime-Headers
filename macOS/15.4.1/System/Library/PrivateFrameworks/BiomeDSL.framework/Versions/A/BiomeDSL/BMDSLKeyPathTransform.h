@class NSString;

@interface BMDSLKeyPathTransform : BMDSLBaseCodable <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *keyPath;

+ (id)withKeyPath:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (id)initWithKeyPath:(id)a0 name:(id)a1 version:(unsigned int)a2;

@end
