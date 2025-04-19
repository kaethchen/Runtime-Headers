@class NSString, ABAccount, ABPerson;

@interface ABExistingPersonVCardAdapter : NSObject <CNVCardParsedResultBuilder> {
    ABPerson *_person;
    ABAccount *_account;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterForPerson:(id)a0 account:(id)a1;
+ (id)propertyForVCardProperty:(id)a0;
+ (id /* block */)valueTransformForProperty:(id)a0;

- (void)dealloc;
- (id)build;
- (id)valueForProperty:(id)a0;
- (BOOL)setImageData:(id)a0;
- (BOOL)canSetValueForProperty:(id)a0;
- (BOOL)setImageData:(id)a0 forReference:(id)a1 clipRects:(id)a2;
- (void)setUnknownProperties:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (BOOL)setValues:(id)a0 labels:(id)a1 isPrimaries:(id)a2 forProperty:(id)a3;
- (id)validCountryCodes;
- (id)initWithPerson:(id)a0 account:(id)a1;

@end
