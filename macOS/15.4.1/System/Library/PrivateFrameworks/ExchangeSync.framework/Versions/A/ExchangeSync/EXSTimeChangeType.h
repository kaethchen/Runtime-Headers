@class NSString, NSDateComponents;

@interface EXSTimeChangeType : NSObject

@property (nonatomic) double offset;
@property (nonatomic) BOOL isOffsetSpecified;
@property (retain, nonatomic) id timeChangePattern;
@property (retain, nonatomic) NSDateComponents *time;
@property (copy, nonatomic) NSString *timeZoneName;

- (void).cxx_destruct;

@end
