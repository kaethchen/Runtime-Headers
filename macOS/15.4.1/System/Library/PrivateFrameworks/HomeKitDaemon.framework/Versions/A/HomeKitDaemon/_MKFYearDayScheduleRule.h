@class Protocol, NSUUID, _MKFInvitation, NSString, NSDate, MKFYearDayScheduleRuleDatabaseID, _MKFGuest;
@protocol MKFInvitation, MKFGuest;

@interface _MKFYearDayScheduleRule : _MKFModel <MKFYearDayScheduleRule, MKFYearDayScheduleRulePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFGuest *guest;
@property (retain, nonatomic) _MKFInvitation *invitation;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFGuest> guest;
@property (retain, nonatomic) id<MKFInvitation> invitation;
@property (readonly, copy, nonatomic) MKFYearDayScheduleRuleDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)populateYearDayScheduleRuleFromDictionary:(id)a0 existingLocalModels:(id)a1 context:(id)a2;

@end
