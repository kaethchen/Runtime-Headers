@class NSString, NSDateComponents;

@interface EWSTimeChangeType : NSObject <XSDefinitionProvider>

@property (nonatomic) double Offset;
@property (nonatomic) BOOL IsOffsetSpecified;
@property (retain, nonatomic) id TimeChangePattern;
@property (retain, nonatomic) NSDateComponents *Time;
@property (copy, nonatomic) NSString *TimeZoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
