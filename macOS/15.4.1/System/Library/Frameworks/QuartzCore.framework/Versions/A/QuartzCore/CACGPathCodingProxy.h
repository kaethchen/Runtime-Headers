@interface CACGPathCodingProxy : CACodingProxy {
    struct CGPath { } *_path;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;

@end
