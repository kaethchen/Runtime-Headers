@class NSString, BSObjCValue;

@interface _BSObjCPropertyBuilder : NSObject <BSObjCPropertyBuilding>

@property (retain) NSString *name;
@property (retain) BSObjCValue *value;
@property BOOL optional;
@property long long associationPolicy;
@property (retain) NSString *getterName;
@property (retain) NSString *setterName;

- (void).cxx_destruct;

@end
