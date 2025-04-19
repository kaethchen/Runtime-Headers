@class NSString, NSDictionary;

@interface ISyncConcreteRecordReference : ISyncRecordReference {
    NSString *_globalRecordIdentifier;
    int _entityNumber;
    NSDictionary *_attributes;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0;
- (id)_changedAttributesFromTruthRecord:(id)a0;
- (id)initWithGlobalRecordIdentifier:(id)a0 entityName:(id)a1 attributes:(id)a2;
- (id)initWithGlobalRecordIdentifier:(id)a0 record:(id)a1 entityName:(id)a2;
- (id)recordIdentifierUsingSnapshot:(id)a0 isModified:(BOOL *)a1;
- (void)setGlobalRecordIdentifier:(id)a0;

@end
