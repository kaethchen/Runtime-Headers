@class NSString, WFImage;
@protocol WFPropertyListObject;

@interface WFStaccatoActionTemplateParameterValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) id<WFPropertyListObject> serializedState;
@property (readonly, nonatomic) WFImage *image;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 image:(id)a3 serializedState:(id)a4;
- (BOOL)isEqualToActionTemplateParameterValue:(id)a0;

@end
