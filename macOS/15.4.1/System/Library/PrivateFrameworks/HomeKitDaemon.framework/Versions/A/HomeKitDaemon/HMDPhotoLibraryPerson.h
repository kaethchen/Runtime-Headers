@class NSUUID, NSString;

@interface HMDPhotoLibraryPerson : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)updateHMPerson:(id)a0;
- (id)createHMPerson;
- (id)initWithHMPerson:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1;

@end
