@class NSArray, NSData;

@interface HIDElement : NSObject {
    struct { struct IOHIDDeviceDeviceInterface **deviceInterface; struct __IOHIDDevice *device; struct __IOHIDValue *value; struct IOHIDElementStruct *elementStructPtr; unsigned int index; struct __CFData *data; struct __CFArray *attachedElements; struct __CFArray *childElements; struct __IOHIDElement *parentElement; struct __IOHIDElement *originalElement; struct _IOHIDCalibrationStruct *calibrationPtr; struct __CFDictionary *properties; struct __CFString *rootKey; unsigned char isDirty; } _element;
}

@property (readonly) HIDElement *parent;
@property (readonly) NSArray *children;
@property long long integerValue;
@property NSData *dataValue;
@property (readonly) long long type;
@property (readonly) long long usagePage;
@property (readonly) long long usage;
@property (readonly) long long reportID;
@property (readonly) long long reportSize;
@property (readonly) long long unit;
@property (readonly) long long unitExponent;
@property (readonly) long long logicalMin;
@property (readonly) long long logicalMax;
@property (readonly) long long physicalMin;
@property (readonly) long long physicalMax;
@property (readonly) unsigned long long timestamp;

- (id)description;
- (struct __IOHIDValue { } *)valueRef;
- (unsigned int)cookie;
- (double)scaleValue:(long long)a0;
- (void)setValueRef:(struct __IOHIDValue { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;

@end
