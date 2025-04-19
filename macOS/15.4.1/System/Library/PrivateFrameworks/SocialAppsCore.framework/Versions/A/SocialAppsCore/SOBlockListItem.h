@class NSString, ABPerson, IMPerson;

@interface SOBlockListItem : NSObject

@property (retain, nonatomic) IMPerson *person;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) void *cmfItem;
@property (retain, nonatomic) NSString *cachedFormattedHandle;
@property (retain, nonatomic) NSString *cachedFormattedPersonName;
@property (readonly, nonatomic) ABPerson *abPerson;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)fullName;
- (id)formattedAddress;
- (id)formattedHandle;
- (id)initWithPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (BOOL)isEqualToBlockListItem:(id)a0;
- (void)lookupPerson;
- (id)formattedPersonNameWithAddress:(BOOL)a0;
- (id)formattedPersonName;
- (id)formattedPersonNameWithAddress;
- (id)initWithABPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;

@end
