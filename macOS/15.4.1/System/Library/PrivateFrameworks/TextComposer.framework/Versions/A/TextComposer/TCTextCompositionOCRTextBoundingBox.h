@class NSString, NSArray;

@interface TCTextCompositionOCRTextBoundingBox : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *coordinates;
@property (readonly, nonatomic) float confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 coordinates:(id)a1;
- (id)initWithText:(id)a0 coordinates:(id)a1 confidence:(float)a2;

@end
