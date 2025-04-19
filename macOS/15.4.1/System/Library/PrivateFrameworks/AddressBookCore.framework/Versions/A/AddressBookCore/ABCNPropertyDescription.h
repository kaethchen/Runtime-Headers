@class NSString, NSArray;

@interface ABCNPropertyDescription : NSObject

@property (readonly, copy, nonatomic) NSString *coreDataKey;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *addressBookProperty;
@property (readonly, nonatomic) SEL readSelector;
@property (readonly, nonatomic) SEL writeSelector;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, copy, nonatomic) id /* block */ toAddressBookTransform;
@property (readonly, copy, nonatomic) id /* block */ fromAddressBookTransform;
@property (readonly, copy, nonatomic) id /* block */ valueForKeyTransform;
@property (readonly, nonatomic) NSArray *equivalentLabelSets;

- (void).cxx_destruct;
- (id)coreDataRelationship;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)equivalentLabelsForLabel:(id)a0;
- (id)initWithKey:(id)a0 readSelector:(SEL)a1 writeSelector:(SEL)a2 addressBookProperty:(id)a3 coreDataKey:(id)a4;
- (id)initWithKey:(id)a0 readSelector:(SEL)a1 writeSelector:(SEL)a2 addressBookProperty:(id)a3 coreDataKey:(id)a4 isMultiValue:(BOOL)a5 toAddressBookTransform:(id /* block */)a6 fromAddressBookTransform:(id /* block */)a7;
- (id)initWithMultiValueKey:(id)a0 readSelector:(SEL)a1 writeSelector:(SEL)a2 addressBookProperty:(id)a3 coreDataKey:(id)a4 toAddressBookTransform:(id /* block */)a5 fromAddressBookTransform:(id /* block */)a6;
- (BOOL)isValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)isValue:(id)a0 preferredToEquivalentValue:(id)a1;
- (void)setValue:(id)a0 onAddressBookPerson:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (BOOL)shouldSkip;
- (id)valueFromAddressBookPerson:(id)a0;
- (id)valueFromCoreDataContact:(id)a0;

@end
