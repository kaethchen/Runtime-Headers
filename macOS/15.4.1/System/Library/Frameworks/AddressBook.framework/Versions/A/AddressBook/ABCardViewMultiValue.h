@class NSString, NSArray, NSMutableArray, ABCardViewPersonMapper;
@protocol ABCardViewProperty;

@interface ABCardViewMultiValue : NSObject <ABCardViewMultiValue> {
    NSMutableArray *_entries;
    NSMutableArray *_removedEntryIdentifiers;
    NSArray *_personIdentifiers;
    id<ABCardViewProperty> _property;
}

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiValueWithLabel:(id)a0 value:(id)a1 property:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)key;
- (id)values;
- (id)identifiers;
- (id)labelAtIndex:(unsigned long long)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)entries;
- (id)labels;
- (id)initWithProperty:(id)a0;
- (BOOL)containsValue:(id)a0;
- (id)defaultLabel;
- (id)entryAtIndex:(unsigned long long)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (id)initWithMultiValue:(id)a0;
- (id)labelForIdentifier:(id)a0;
- (id)valueForIdentifier:(id)a0;
- (id)availableLabels;
- (id)valuesForLabel:(id)a0;
- (id)availableLabelsAtIndex:(unsigned long long)a0;
- (id)availableLabelsForPersonIdentifier:(id)a0;
- (struct ABCardActionMultiValueIdentifier { id x0; id x1; })cardActionIdentifierForMultiValueIdentifier:(id)a0;
- (id)constraintForPersonIdentifier:(id)a0;
- (BOOL)customLabelsSupportedAtIndex:(unsigned long long)a0;
- (void)eachEntry:(id /* block */)a0;
- (id)firstValueForLabel:(id)a0;
- (BOOL)hasEmptyValue;
- (unsigned long long)indexOfValueForIdentifier:(id)a0;
- (id)initialLabels;
- (id)initialLabelsForPersonIdentifier:(id)a0;
- (BOOL)isDuplicateIndex:(unsigned long long)a0;
- (BOOL)isPrivateValueIndex:(unsigned long long)a0;
- (BOOL)isReadOnlyIndex:(unsigned long long)a0;
- (BOOL)isSuggestedIndex:(unsigned long long)a0;
- (BOOL)isValueEmptyAtIndex:(unsigned long long)a0;
- (id)localizedLabelAtIndex:(unsigned long long)a0;
- (id)multiValueByUpdatingWithBlock:(id /* block */)a0;
- (id)multiValueIdentifierAtIndex:(unsigned long long)a0;
- (id)multiValueIdentifiersAtIndex:(unsigned long long)a0;
- (id)personIdentifierAtIndex:(unsigned long long)a0;
- (id)personIdentifiersAtIndex:(unsigned long long)a0;
- (id)removedEntryIdentifiers;
- (id)suggestedValueAtIndex:(unsigned long long)a0;

@end
