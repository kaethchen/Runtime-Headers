@class NSArray;

@interface AVB17221AECPAEMAuthenticationGetKeychainListResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short keychainID;
@property (nonatomic) unsigned short listIndex;
@property (nonatomic) unsigned short numberOfLists;
@property (copy, nonatomic) NSArray *keyIDs;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingKeyIDs;
+ (id)keyPathsForValuesAffectingKeychainID;
+ (id)keyPathsForValuesAffectingListIndex;
+ (id)keyPathsForValuesAffectingNumberOfLists;

- (id)init;
- (unsigned short)listIndex;
- (void)setListIndex:(unsigned short)a0;
- (id)keyIDs;
- (unsigned short)keychainID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)numberOfLists;
- (void)setKeyIDs:(id)a0;
- (void)setKeychainID:(unsigned short)a0;
- (void)setNumberOfLists:(unsigned short)a0;

@end
