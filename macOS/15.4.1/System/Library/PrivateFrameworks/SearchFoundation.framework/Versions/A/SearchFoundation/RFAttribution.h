@class SFCommandReference, NSString, NSDictionary, NSData, RFTextProperty, NSNumber, RFVisualProperty;

@interface RFAttribution : NSObject <RFAttribution, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFTextProperty *title;
@property (retain, nonatomic) RFTextProperty *subtitle;
@property (retain, nonatomic) RFVisualProperty *image;
@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *localized_index;
@property (copy, nonatomic) NSString *localized_separator;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) SFCommandReference *commandReference;
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
- (id)initWithProtobuf:(id)a0;

@end
