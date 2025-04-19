@interface CNLDAPTransforms : NSObject

+ (id)homeAddressKeys;
+ (id)workAddressKeys;
+ (id)contactFromLDAPResult:(id)a0;
+ (id /* block */)contactFromLDAPResultTransform;
+ (id)descriptionsByAttribute;
+ (id)dictionaryByGroupingAddresses:(id)a0;
+ (id)dictionaryByGroupingPhotos:(id)a0;
+ (id)dictionaryByNormalizingKeys:(id)a0;
+ (id)extractKeys:(id)a0 fromDictionary:(id)a1;
+ (id)photoKeys;
+ (id)propertyDescriptionForAttribute:(id)a0;
+ (id)thumbnailPhotoKeys;

@end
