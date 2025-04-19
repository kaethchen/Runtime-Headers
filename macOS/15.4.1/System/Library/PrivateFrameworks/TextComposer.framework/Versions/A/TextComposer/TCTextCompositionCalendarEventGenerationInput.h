@class NSArray, NSDictionary;

@interface TCTextCompositionCalendarEventGenerationInput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *textBoxes;
@property (readonly, copy, nonatomic) NSArray *paragraphBoxes;
@property (readonly, copy, nonatomic) NSArray *paragraphGroupBoxes;
@property (readonly, copy, nonatomic) NSArray *blockBoxes;
@property (readonly, copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTextBoxes:(id)a0 paragraphBoxes:(id)a1 paragraphGroupBoxes:(id)a2 blockBoxes:(id)a3 options:(id)a4;

@end
