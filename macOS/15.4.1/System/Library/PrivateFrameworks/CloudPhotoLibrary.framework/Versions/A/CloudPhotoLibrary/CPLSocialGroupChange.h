@class NSData, NSString, CPLSocialGroupPersonList;

@interface CPLSocialGroupChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *personsData;
@property (nonatomic) short verifiedType;
@property (retain, nonatomic) NSString *customTitle;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (retain, nonatomic) CPLSocialGroupPersonList *persons;

+ (BOOL)supportsDeletion;
+ (id)_createTestSocialGroupWithPersons:(id)a0;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)a0;
+ (Class)relatedRecordClass;
+ (BOOL)relatedRelationshipIsWeak;
+ (BOOL)supportsDirectDeletion;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (void)setPersonData:(id)a0;
- (id)keyAssetScopedIdentifier;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (void)setKeyAssetScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
