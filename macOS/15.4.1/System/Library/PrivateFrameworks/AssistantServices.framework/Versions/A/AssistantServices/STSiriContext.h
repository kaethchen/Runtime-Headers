@class NSArray;

@interface STSiriContext : NSObject <NSSecureCoding> {
    NSArray *_modelObjects;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_aceValue;
- (id)initWithModelObjects:(id)a0;
- (id)modelObjects;

@end
