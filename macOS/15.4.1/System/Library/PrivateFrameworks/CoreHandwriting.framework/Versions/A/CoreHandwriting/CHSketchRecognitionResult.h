@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *string;
@property (readonly) double rotation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2;

@end
