@class NSString, NSPersonNameComponents, PXSharedLibraryUIParticipant, PHPerson;

@interface PXSharedLibraryIncludedPeopleInfo : NSObject <NSCopying>

@property (readonly, nonatomic) PXSharedLibraryUIParticipant *participant;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;

+ (id)personForParticipant:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (id)initWithParticipant:(id)a0;
- (id)_initWithParticipant:(id)a0 person:(id)a1;
- (id)initWithParticipant:(id)a0 person:(id)a1;

@end
