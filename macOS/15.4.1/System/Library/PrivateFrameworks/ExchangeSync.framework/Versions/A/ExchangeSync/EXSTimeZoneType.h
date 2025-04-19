@class EXSTimeChangeType, NSString;

@interface EXSTimeZoneType : NSObject

@property (nonatomic) double baseOffset;
@property (nonatomic) BOOL isBaseOffsetSpecified;
@property (retain, nonatomic) EXSTimeChangeType *standard;
@property (retain, nonatomic) EXSTimeChangeType *daylight;
@property (copy, nonatomic) NSString *timeZoneName;

- (void).cxx_destruct;

@end
