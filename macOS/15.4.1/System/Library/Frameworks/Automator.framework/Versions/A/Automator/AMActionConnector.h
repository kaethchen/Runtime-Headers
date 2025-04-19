@class AMConnectionPoint, NSString, AMConversion, NSArray, NSError, NSDictionary;

@interface AMActionConnector : NSObject <NSCopying>

@property (retain, nonatomic) AMConnectionPoint *_runtimePointB;
@property (copy) NSString *UUID;
@property (retain, nonatomic) AMConnectionPoint *pointA;
@property (retain, nonatomic) AMConnectionPoint *pointB;
@property (retain) AMConversion *selectedConversion;
@property (retain, nonatomic) NSArray *conversions;
@property (retain) NSError *conversionError;
@property (retain, nonatomic) AMConnectionPoint *runtimePointB;
@property (readonly, nonatomic) NSDictionary *propertyList;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (id)runWithInput:(id)a0 error:(id *)a1;

@end
