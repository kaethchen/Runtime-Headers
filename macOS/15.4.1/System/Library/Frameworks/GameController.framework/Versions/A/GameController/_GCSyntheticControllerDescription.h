@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticControllerDescription : NSObject

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> controllerIdentifier;
@property (readonly) NSString *persistentIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDescription:(id)a0;
- (id)initWithControllerIdentifier:(id)a0 persistentIdentifier:(id)a1;

@end
