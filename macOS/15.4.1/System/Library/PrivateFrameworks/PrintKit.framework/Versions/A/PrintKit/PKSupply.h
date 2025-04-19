@class NSArray, NSString;

@interface PKSupply : NSObject <PKUserCodable>

@property (readonly) NSArray *colors;
@property (readonly) int level;
@property (readonly) NSString *name;
@property (readonly) NSString *markerType;
@property (readonly) int lowLevel;
@property (readonly) int highLevel;
@property (readonly) long long supplyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidColorString:(const char *)a0;

@end
