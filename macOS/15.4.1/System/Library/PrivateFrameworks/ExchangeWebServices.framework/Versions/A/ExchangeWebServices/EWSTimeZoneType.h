@class NSString, EWSTimeChangeType;

@interface EWSTimeZoneType : NSObject <XSDefinitionProvider>

@property (nonatomic) double BaseOffset;
@property (nonatomic) BOOL IsBaseOffsetSpecified;
@property (retain, nonatomic) EWSTimeChangeType *Standard;
@property (retain, nonatomic) EWSTimeChangeType *Daylight;
@property (copy, nonatomic) NSString *TimeZoneName;
@property (readonly, copy, nonatomic) NSString *StandardTimeZoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)definition;
+ (id)StandardTimeZoneNameForEntourageTimeZoneName:(id)a0;
+ (id)StandardTimeZoneNameForWindowsTimeZoneName:(id)a0;
+ (id)StandardTimeZoneNameForWindowsTimeZoneNameFromICU:(id)a0;
+ (id)StandardTimeZoneNameForWindowsTimeZoneNameFromPlist:(id)a0;
+ (id)WindowsTimeZoneNameForStandardTimeZoneName:(id)a0;
+ (id)WindowsTimeZoneNameForStandardTimeZoneNameFromICU:(id)a0;
+ (id)WindowsTimeZoneNameForStandardTimeZoneNameFromPlist:(id)a0;

- (void).cxx_destruct;
- (id)initWithStandardTimeZoneName:(id)a0;

@end
