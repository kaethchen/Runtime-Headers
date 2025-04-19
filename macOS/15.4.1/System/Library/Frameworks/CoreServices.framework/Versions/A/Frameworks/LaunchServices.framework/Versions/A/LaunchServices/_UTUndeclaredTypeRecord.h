@class NSString;

@interface _UTUndeclaredTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)version;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)a0 block:(id /* block */)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 identifier:(id)a1;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (id)declaration;
- (BOOL)isInPublicDomain;

@end
