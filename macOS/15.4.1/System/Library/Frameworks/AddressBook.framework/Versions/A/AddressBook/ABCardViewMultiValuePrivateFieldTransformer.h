@class CNContact, NSString, ABCardViewPersonMapper;

@interface ABCardViewMultiValuePrivateFieldTransformer : NSObject <ABCardViewMultiValueTransformer>

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *field;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformerWithContact:(id)a0 personMapper:(id)a1 field:(id)a2;

- (void).cxx_destruct;
- (id)componentIdentifiersForAggregateIdentifier:(id)a0;
- (id /* block */)identifierIsPrivate;
- (id)initWithContact:(id)a0 personMapper:(id)a1 field:(id)a2;
- (BOOL)privacyStateOfAggregateIdentifier:(id)a0;
- (id)reverseTransformMultiValue:(id)a0;
- (id /* block */)setIdentifierIsPrivate:(BOOL)a0;
- (void)setPrivacyStateOfAggregateIdentifier:(id)a0 isPrivate:(BOOL)a1;
- (id)transformMultiValue:(id)a0;

@end
