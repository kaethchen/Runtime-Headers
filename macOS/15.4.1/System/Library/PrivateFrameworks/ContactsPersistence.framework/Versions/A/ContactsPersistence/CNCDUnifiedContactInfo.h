@class NSString, NSNumber, NSArray;

@interface CNCDUnifiedContactInfo : NSManagedObject

@property (retain, nonatomic) NSString *linkedRecordIdentifiersString;
@property (retain, nonatomic) NSNumber *changeTypeNumber;
@property (retain, nonatomic) NSNumber *inhibitsIndividualContactNumber;
@property (retain, nonatomic) NSArray *linkedRecordIdentifiers;
@property (retain, nonatomic) NSString *unifiedRecordIdentifier;
@property (nonatomic) long long changeType;
@property (nonatomic) BOOL inhibitsIndividualContact;

+ (id)predicateForInfosWithRecordIdentifiers:(id)a0;
+ (id)predicateForInfosWithUnifiedRecordIdentifiers:(id)a0;

@end
