@class NSString, NSDictionary, NSData, RFTextProperty, NSNumber, RFVisualProperty;

@interface RFTableCell : NSObject <RFTableCell, NSSecureCoding, NSCopying> {
    struct { unsigned char text : 1; unsigned char visual : 1; unsigned char horizontal_alignment : 1; unsigned char applySmallCaps : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFTextProperty *text;
@property (retain, nonatomic) RFVisualProperty *visual;
@property (copy, nonatomic) NSNumber *column_span;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic) BOOL applySmallCaps;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasText;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasApplySmallCaps;
- (BOOL)hasHorizontal_alignment;
- (BOOL)hasVisual;

@end
