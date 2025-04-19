@class NSString, NSNumber, NSArray;

@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>

@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *productID;
@property (readonly) NSNumber *versionNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;
@property (readonly) NSNumber *maxInputReportSize;
@property (readonly) NSNumber *maxOutputReportSize;
@property (readonly) NSNumber *maxFeatureReportSize;
@property (readonly) NSArray *elements;

- (id)debugDescription;
- (id)init;
- (id)valueForKey:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (id)valueForHIDDeviceKey:(id)a0;

@end
