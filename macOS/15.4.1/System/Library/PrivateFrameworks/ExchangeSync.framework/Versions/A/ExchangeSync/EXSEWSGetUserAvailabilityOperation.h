@class NSArray, NSMutableDictionary, NSDate;

@interface EXSEWSGetUserAvailabilityOperation : EXSEWSOperation

@property (retain, nonatomic) NSArray *emails;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSMutableDictionary *emailToFreeBusySpans;

+ (BOOL)_string:(id)a0 hasPrefixCaseInsensitive:(id)a1;
+ (long long)_calFreeBusyFromMergedFreeBusy:(unsigned short)a0;
+ (long long)_calFreeBusyFromEWSFreeBusy:(long long)a0;
+ (BOOL)_hasMailTo:(id)a0;
+ (id)_stringRemovingMailTo:(id)a0;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (void)_processResponse:(id)a0;
- (id)_UTCSerializableTimeZone;
- (id)_busySpan:(long long)a0 forDate:(id)a1 startsInMinutes:(unsigned long long)a2 endsInMinutes:(unsigned long long)a3 inCalendar:(id)a4;
- (id)_busySpan:(long long)a0 startComponents:(id)a1 endComponents:(id)a2 inCalendar:(id)a3;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
