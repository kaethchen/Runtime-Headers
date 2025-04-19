@class NSString;

@interface XQueryDuration : NSObject <XQueryAtomicType> {
    BOOL isNeg;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double second;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)durationWithString:(id)a0;

@end
